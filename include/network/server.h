#pragma once
#ifndef SERVER_H
#define SERVER_H
#include <network/network.h>

class Server : public Network {
public:
    Server();
    virtual ~Server();

    void start() override; // Implementing pure virtual function
    // Add server-specific methods here
};
#endif //SERVER_H