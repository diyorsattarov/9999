#pragma once
#ifndef GAME_H
#define GAME_H

#include <blackjack/blackjack.h>

class Game : public Blackjack {
private:
    Dealer dealer;
public:
    Game(int numDecks = 6);

    void startGame();
    void playRound();
    void endGame();
};
#endif //GAME_H