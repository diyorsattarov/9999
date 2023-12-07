#include <dealer/dealer.h>

Dealer::Dealer(int dId) : dealerId(dId) {}

void Dealer::addCard(const Card& card) {
    hand.push_back(card);
}