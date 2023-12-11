// client.h
#pragma once
#ifndef CLIENT_H
#define CLIENT_H
#include <network/network.h>
#include <string>
#include <boost/asio.hpp>

class Client : public Network {
public:
    Client();
    ~Client();

    void connect(const std::string& ipAddress, int port); // Implementing pure virtual function
    bool isConnected() const;
    // Add client-specific methods here

private:
    boost::asio::io_service ioService;
    boost::asio::ip::tcp::resolver resolver;
    boost::asio::ip::tcp::socket socket;
};

#endif //CLIENT_H
