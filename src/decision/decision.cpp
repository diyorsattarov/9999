#include <decision/decision.h>

int Decision::calculateHandTotal(const std::vector<Card>& hand) {
    int total = 0;
    int numAces = 0;

    for (const Card& card : hand) {
        int cardValue = static_cast<int>(card.getValue());
        // Handle Ace separately
        if (cardValue == 12) {  // Ace
            total += 11;
            numAces++;
        } else if (cardValue >= 9) {  // 10, Jack, Queen, King
            total += 10;
        } else {
            total += (cardValue + 2);  // 2 to 8
        }
    }

    // Adjust for Aces if necessary
    while (numAces > 0 && total > 21) {
        total -= 10;
        numAces--;
    }

    return total;
}

bool Decision::containsAce(const std::vector<Card>& hand) {
    for (const Card& card : hand) {
        if (card.getValue() == CardValue::Ace) {
            return true;
        }
    }
    return false;
}

PlayerDecision Decision::checkPair(const std::vector<Card>& playerHand, int dealerUpCard) {
    CardValue pairValue = playerHand.front().getValue();  // Assuming it's a pair
    switch (pairValue) {
        case CardValue::Two:
        case CardValue::Three:
        case CardValue::Four:
        case CardValue::Five:
        case CardValue::Six:
        case CardValue::Seven:
        case CardValue::Eight:
            return PlayerDecision::Split;
        case CardValue::Nine:
        case CardValue::Ten:
            return PlayerDecision::Stand;
        case CardValue::Ace:
            return PlayerDecision::Split;
        default:
            return PlayerDecision::Hit;
    }
}

PlayerDecision Decision::checkHand(const std::vector<Card>& playerHand, int dealerUpCard) {
    int total = calculateHandTotal(playerHand);
    bool hasAce = containsAce(playerHand);

    if (playerHand.size() == 2 && playerHand.front().getValue() == playerHand.back().getValue()) {
        // It's a pair
        return checkPair(playerHand, dealerUpCard);
    }

    if (hasAce) {
        return checkSoftHand(total, dealerUpCard);
    } else {
        return checkHardHand(total, dealerUpCard);
    }
}



PlayerDecision Decision::getDecision(const Player& player, int dealerUpCard) {
    // Use the checkHand method to determine the decision
    // You can customize this based on your specific rules
    return checkHand(player.getHand(), dealerUpCard);
}

PlayerDecision Decision::checkSoftHand(int total, int dealerUpCard) {
    switch (total) {
        case 18:
            return PlayerDecision::Stand;
        case 17:
            if (dealerUpCard >= 4 && dealerUpCard <= 6) {
                return PlayerDecision::Double;
            } else {
                return PlayerDecision::Hit;
            }
        case 16:
            if (dealerUpCard >= 9) {
                // surrender or hit
                return PlayerDecision::Surrender;
            } else if (dealerUpCard >= 7){
                return PlayerDecision::Hit;
            } else {
                return PlayerDecision::Stand;
            }
        case 15:
        case 14:
        case 13:
        case 12:
            return PlayerDecision::Hit;
        case 11:
            return PlayerDecision::Double;
        case 10:
        case 9:
            if (dealerUpCard >= 2 && dealerUpCard <= 6) {
                return PlayerDecision::Double;
            } else {
                return PlayerDecision::Hit;
            }
        case 8:
            if (dealerUpCard == 5 || dealerUpCard == 6) {
                return PlayerDecision::Double;
            } else {
                return PlayerDecision::Hit;
            }
        default:
            return PlayerDecision::Stand;  // Default case for hard hands
    }
}

PlayerDecision Decision::checkHardHand(int total, int dealerUpCard) {
    switch (total) {
        case 20:
            return PlayerDecision::Stand;
        case 17:
            return PlayerDecision::Stand;
        case 16:
        case 15:
        case 14:
        case 13:
        case 12:
            return PlayerDecision::Hit;
        case 11:
            return PlayerDecision::Double;
        case 10:
        case 9:
            if (dealerUpCard >= 2 && dealerUpCard <= 6) {
                return PlayerDecision::Double;
            } else {
                return PlayerDecision::Hit;
            }
        case 8:
            if (dealerUpCard == 5 || dealerUpCard == 6) {
                return PlayerDecision::Double;
            } else {
                return PlayerDecision::Hit;
            }
        default:
            return PlayerDecision::Stand;  // Default case for hard hands
    }
}
