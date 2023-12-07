#include <blackjack/blackjack.h>

class Game : public Blackjack {
public:
    Game(int numDecks = 6);

    void startGame();
    void playRound();
    void endGame();
};