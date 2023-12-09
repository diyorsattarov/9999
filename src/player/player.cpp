#include <player/player.h>
#include <utilities/utilities.h>

Player::Player(int pId) : playerId(pId), balance(0) {}

int Player::getPlayerId() const { return playerId; }

std::vector<Card> Player::getHand() const {
    return hand;
}

void Player::addCard(const Card& card) {
    hand.push_back(card);
}

void Player::clearHand() {
    hand.clear();
}

void Player::printHand() const {
    // Use combined_logger for logging to both console and file
    if (hand.empty()) {
        Utilities::file_logger->info("Player {}'s Hand is empty.", playerId);
    } else {
        Utilities::file_logger->info("Player {}'s Hand:", playerId);

        for (const auto& card : hand) {
            Utilities::file_logger->info("{} of {}", 
                Utilities::cardValueToString(card.getValue()), Utilities::cardSuitToString(card.getSuit())
            );
        }
    }

    Utilities::file_logger->info("");  // Add a new line at the end
}
