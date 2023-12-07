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