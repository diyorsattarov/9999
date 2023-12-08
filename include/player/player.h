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

    int getBalance();
    int getPlayerId() const;
    std::vector<Card> getHand() const;

    void addCard(const Card& card);
    void printHand() const;
};
#endif // PLAYER_H