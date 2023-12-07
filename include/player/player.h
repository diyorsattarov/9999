#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <card/card.h>

class Player {
private:
    std::vector<Card> hand;
    int playerId;
    int balance;
public:
    Player(int pId);

    int getBalance();
    int getPlayerId() const;
};
#endif // PLAYER_H