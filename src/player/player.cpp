#include <player/player.h>
#include <utilities/utilities.h>

Player::Player(int pId) : playerId(pId), balance(0) {}

int Player::getPlayerId() const { return playerId; }

void Player::addCard(const Card& card) {
    hand.push_back(card);
}

void Player::printHand() const {
    // Use combined_logger for logging to both console and file
    Utilities::combined_logger->info("Player {}'s Hand:", playerId);

    for (const auto& card : hand) {
        Utilities::combined_logger->info("{} of {}", 
            Utilities::cardValueToString(card.getValue()), Utilities::cardSuitToString(card.getSuit())
        );
    }

    Utilities::combined_logger->info("");  // Add a new line at the end
}