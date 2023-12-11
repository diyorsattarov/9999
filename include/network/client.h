#pragma once
#ifndef CLIENT_H
#define CLIENT_H
#include <network/network.h>

class Client : public Network {
public:
    Client();
    virtual ~Client();

    void connect(const std::string& ipAddress, int port) override; // Implementing pure virtual function
    // Add client-specific methods here
};
#endif //CLIENT_H