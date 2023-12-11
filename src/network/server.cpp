// network/server.cpp

#include <network/server.h>
#include <iostream>

using namespace boost::asio;

Server::Server() : acceptor(ioService, ip::tcp::endpoint(ip::tcp::v4(), 0)), socket(ioService) {
    // Initialize server-specific resources
}

Server::~Server() {
    acceptor.close();
}

void Server::start(int port) {
    ip::tcp::endpoint endpoint(ip::tcp::v4(), port);
    acceptor.open(endpoint.protocol());
    acceptor.bind(endpoint);
    acceptor.listen();

    std::cout << "Server started on port " << acceptor.local_endpoint().port() << std::endl;

    // Start accepting connections
    acceptor.async_accept(socket, [this](const boost::system::error_code& error) {
        handleAccept(error);
    });

    ioService.run();
}

void Server::handleAccept(const boost::system::error_code& error) {
    if (!error) {
        std::cout << "Client connected: " << socket.remote_endpoint() << std::endl;

        // Handle the new connection, you can add your logic here

        // Continue accepting connections
        acceptor.async_accept(socket, [this](const boost::system::error_code& e) {
            handleAccept(e);
        });
    } else {
        std::cerr << "Accept error: " << error.message() << std::endl;
    }
}

void Server::stop() {
    acceptor.close();
    ioService.stop();
    std::cout << "Server stopped" << std::endl;
}
