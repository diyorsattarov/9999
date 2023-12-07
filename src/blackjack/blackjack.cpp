#include <iostream>
#include <iomanip> // for std::setw
#include <algorithm>
#include <random>
#include <chrono>

#include <blackjack/blackjack.h>

// Blackjack class implementation

Blackjack::Blackjack(int numDecks) {
    numDecks = std::max(numDecks, 1);
    // Load shoe vector with cards
    for (int i = 0; i < numDecks; ++i) {
        for (int suit = 0; suit < static_cast<int>(CardSuit::Spades) + 1; ++suit) {
            for (int value = 0; value < static_cast<int>(CardValue::Ace) + 1; ++value) {
                shoe.emplace_back(Card(static_cast<CardValue>(value), static_cast<CardSuit>(suit)));
            }
        }
    }
    shuffle();
}

Card Blackjack::deal() {
    if (shoe.empty()) {
        shuffle();
    }

    Card dealtCard = shoe.back();
    shoe.pop_back();
    return dealtCard;
}

void Blackjack::shuffle() {
    // Use a random device and a random engine for shuffling
    std::random_device rd;
    std::mt19937 gen(rd());

    // Shuffle the shoe using the random engine
    std::shuffle(shoe.begin(), shoe.end(), gen);
}

int Blackjack::getSize() const {
    return shoe.size();
}

int Blackjack::getPlayerCt() const {
    return players.size();
}

void Blackjack::printShoe() const {
    int cardCount = 0;

    Utilities::logger->info("{:<15}{:<20}", "Card Number", "Card");
    Utilities::logger->info("{:<40}", std::string(40, '-'));

    for (const auto& card : shoe) {
        Utilities::logger->info("{:<15}{:<20}", cardCount++, Utilities::cardValueToString(card.getValue()) +
                                                        " of " + Utilities::cardSuitToString(card.getSuit()));
    }

    Utilities::logger->info("");  // Add a new line at the end
}

bool Blackjack::addPlayer(const Player& player) {
    if (players.size() > 6) {
        return false;
    } else {
        players.push_back(player);
        return true;
    }
}

bool Blackjack::removePlayer(int playerId) {
    auto it = std::remove_if(players.begin(), players.end(),
                             [playerId](const Player& player) {
                                 return player.getPlayerId() == playerId;
                             });

    if (it != players.end()) {
        players.erase(it, players.end());
        return true; // Player successfully removed
    }

    return false; // Player not found
}

std::vector<Player>& Blackjack::getPlayers() {
    return players;
}
