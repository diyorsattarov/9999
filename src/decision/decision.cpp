#include <decision/decision.h>

int Decision::calculateHandTotal(const std::vector<Card>& hand) {
    int total = 0;
    int numAces = 0;

    for (const Card& card : hand) {
        int cardValue = static_cast<int>(card.getValue());

        // Handle Ace separately
        if (cardValue == 0) {  // Ace
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

PlayerDecision Decision::checkHand(const std::vector<Card>& playerHand, int dealerUpCard) {
    int total = calculateHandTotal(playerHand);
    bool hasAce = containsAce(playerHand);

    if (hasAce) {
        // Soft hand (Ace being counted as 11)
        if (total == 17) {
            // Soft 17
            if (dealerUpCard >= 4 && dealerUpCard <= 6) {
                return PlayerDecision::Double;
            } else {
                return PlayerDecision::Hit;
            }
        } else {
            // Other soft hands logic can be added here
        }
    } else {
        // Hard hand
        if (total >= 17) {
            return PlayerDecision::Stand;
        } else {
            return PlayerDecision::Hit;
        }
    }
    return PlayerDecision::Surrender;
}


PlayerDecision Decision::getDecision(const Player& player, int dealerUpCard) {
    // Use the checkHand method to determine the decision
    // You can customize this based on your specific rules
    return checkHand(player.getHand(), dealerUpCard);
}

