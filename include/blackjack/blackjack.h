#pragma once
#ifndef BLACKJACK_H
#define BLACKJACK_H

#include <utilities/utilities.h>
#include <player/player.h>
#include <dealer/dealer.h>

class Blackjack {
private:
    std::vector<Card> shoe;
    std::vector<Player> players;
public: 
    Blackjack(int numDecks = 6);
    void shuffle();
    Card deal();
    int getSize() const;
    int getPlayerCt() const;
    void printShoe() const;
    bool addPlayer(const Player& player);
    bool removePlayer(int playerId);

    std::vector<Player>& getPlayers();
};
#endif //BLACKJACK_H