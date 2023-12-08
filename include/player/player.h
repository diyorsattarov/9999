#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include <utilities/utilities.h>

class Player {
private:
    std::vector<Card> hand;
    int playerId;
    int balance;
public:
    Player(int pId);

    void addCard(const Card& card);

    int getBalance();
    int getPlayerId() const;

    void printHand() const;
};
#endif // PLAYER_H