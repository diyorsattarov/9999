#pragma once
#ifndef DEALER_H
#define DEALER_H

#include <vector>
#include <card/card.h>

class Dealer {
private:
    int dealerId;
    std::vector<Card> hand;
public:
    Dealer(int dId);
    void addCard(const Card& card);
};

#endif