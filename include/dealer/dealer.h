#pragma once
#ifndef DEALER_H
#define DEALER_H

#include <utilities/utilities.h>

class Dealer {
private:
    std::vector<Card> hand;
public:
    int dealerId;
    Dealer();
    void addCard(const Card& card);
    void clearHand();
    void printHand() const;
};

#endif