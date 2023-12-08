#include <dealer/dealer.h>

Dealer::Dealer() {}

bool Dealer::addCard(const Card& card) {
    hand.push_back(card);
    return true;
}

void Dealer::printHand() const {
    // Use combined_logger for logging to both console and file
    Utilities::file_logger->info("Dealer {}'s Hand:", dealerId);

    for (const auto& card : hand) {
        Utilities::file_logger->info("{} of {}", 
            Utilities::cardValueToString(card.getValue()), Utilities::cardSuitToString(card.getSuit())
        );
    }

    Utilities::file_logger->info("");  // Add a new line at the end
}