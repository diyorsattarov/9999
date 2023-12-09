#pragma once
#ifndef GAME_H
#define GAME_H

#include <blackjack/blackjack.h>

class Game : public Blackjack {
private:
    Dealer dealer;

    void dealInitialCards();
    void processPlayerDecisions();
    void processDealerTurn();
public:
    Game(int numDecks = 6);

    void startGame();
    void playGame();
    void endGame();
};
#endif //GAME_H