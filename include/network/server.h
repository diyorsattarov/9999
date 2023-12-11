#pragma once
#ifndef SERVER_H
#define SERVER_H
#include <network/network.h>
#include <boost/asio.hpp>

class Server : public Network {
public:
    Server();
    ~Server();

    void start(int port);
    void handleAccept(const boost::system::error_code& error);
    // Add server-specific methods here
    void stop();
private:
    boost::asio::io_service ioService;
    boost::asio::ip::tcp::acceptor acceptor;
    boost::asio::ip::tcp::socket socket;

    //void handleAccept(const boost::system::error_code& error);
};
#endif //SERVER_H