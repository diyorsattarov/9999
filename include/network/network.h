#pragma once
#ifndef NETWORK_H
#define NETWORK_H

class Network {
public:
    Network();
    virtual ~Network();

    virtual void start() = 0;
    virtual void connect(const std::string& ipAddress, int port) = 0;
};
#endif //NETWORK_H