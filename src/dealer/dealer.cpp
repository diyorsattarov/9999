#include <dealer/dealer.h>

Dealer::Dealer() {}

void Dealer::addCard(const Card& card) {
    hand.push_back(card);
}

void Dealer::clearHand() {
    hand.clear();
}

void Dealer::printHand() const {
    // Use combined_logger for logging to both console and file
    Utilities::file_logger->info("Dealer {}'s Hand: ({})", dealerId, Utilities::cardValueToString(hand.front().getValue()));

    Utilities::file_logger->info("");  // Add a new line at the end
}