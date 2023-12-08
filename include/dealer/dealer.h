#pragma once
#ifndef DEALER_H
#define DEALER_H

#include <utilities/utilities.h>

class Dealer {
private:
    int dealerId;
    std::vector<Card> hand;
public:
    Dealer();
    bool addCard(const Card& card);

    void printHand() const;
};

#endif