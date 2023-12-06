#include <vector>
#include <card/card.h>

class Deck {
private:
    std::vector<Card> cards;
public:
    Deck();
    int getSize();
};