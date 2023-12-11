// client.cpp
#include <network/client.h>
#include <iostream>

using namespace boost::asio;

Client::Client() : resolver(ioService), socket(ioService) {
    // Initialize client-specific resources
}

Client::~Client() {
    // Close the socket if it's open
    if (socket.is_open()) {
        boost::system::error_code ec;
        socket.shutdown(ip::tcp::socket::shutdown_both, ec);
        socket.close(ec);
        if (ec) {
            std::cerr << "Error closing socket: " << ec.message() << std::endl;
        }
    }

    // Cleanup client-specific resources
    // (Add any additional cleanup steps specific to your client)
}

void Client::connect(const std::string& ipAddress, int port) {
    ip::tcp::resolver::query query(ipAddress, std::to_string(port));
    ip::tcp::resolver::iterator endpointIterator = resolver.resolve(query);

    // Use the error_code to check for connection errors
    boost::system::error_code ec;
    boost::asio::connect(socket, endpointIterator, ec);

    if (!ec) {
        std::cout << "Connected to server!" << std::endl;
    } else {
        std::cerr << "Failed to connect to the server: " << ec.message() << std::endl;
    }
}

bool Client::isConnected() const {
    return socket.is_open();  // Check if the socket is open
}