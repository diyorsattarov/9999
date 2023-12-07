#include <iostream>
#include <vector>
#include <player/player.h>

class Blackjack {
private:
    std::vector<Card> shoe;
    std::vector<Player> players;
public: 
    Blackjack(int numDecks = 6);
    void shuffle();
    Card deal();
    int getSize() const;
    void printShoe() const;
};  