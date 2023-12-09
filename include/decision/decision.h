#pragma once
#ifndef DECISION_H
#define DECISION_H

#include <utilities/utilities.h>

enum class PlayerDecision {
    Hit,
    Stand,
    Split,
    Double,
    Surrender
};

class Decision {
public:
    PlayerDecision getDecision(const Player& player, int dealerUpCard);
    int calculateHandTotal(const std::vector<Card>& hand);
    bool containsAce(const std::vector<Card>& hand);
    PlayerDecision checkSoftHand(int total, int dealerUpCard);
    PlayerDecision checkHardHand(int total, int dealerUpCard);
private:
    // Define combinations and their corresponding decisions
    std::unordered_map<std::string, PlayerDecision> handDecisions;

    // Method to check for specific hand combinations
    PlayerDecision checkHand(const std::vector<Card>& playerHand, int dealerUpCard);
};
#endif //DECISION_H