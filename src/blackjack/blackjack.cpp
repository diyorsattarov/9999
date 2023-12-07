#include <iostream>
#include <iomanip> // for std::setw
#include <algorithm>
#include <random>
#include <chrono>


#include <blackjack/blackjack.h>

Blackjack::Blackjack(int numDecks) {
    numDecks = std::max(numDecks, 1);

    for (int i = 0; i < numDecks; ++i) {
        for (int suit = 0; suit < static_cast<int>(CardSuit::Spades) + 1; ++suit) {
            for (int value = 0; value < static_cast<int>(CardValue::Ace) + 1; ++value) {
                shoe.emplace_back(Card(static_cast<CardValue>(value), static_cast<CardSuit>(suit)));
            }
        }
    }
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

std::string cardValueToString(CardValue value) {
    switch (value) {
        case CardValue::Two: return "Two";
        case CardValue::Three: return "Three";
        case CardValue::Four: return "Four";
        case CardValue::Five: return "Five";
        case CardValue::Six: return "Six";
        case CardValue::Seven: return "Seven";
        case CardValue::Eight: return "Eight";
        case CardValue::Nine: return "Nine";
        case CardValue::Ten: return "Ten";
        case CardValue::Jack: return "Jack";
        case CardValue::Queen: return "Queen";
        case CardValue::King: return "King";
        case CardValue::Ace: return "Ace";
        default: return "Unknown";
    }
}

// Helper function to convert CardSuit to string
std::string cardSuitToString(CardSuit suit) {
    switch (suit) {
        case CardSuit::Hearts: return "Hearts";
        case CardSuit::Diamonds: return "Diamonds";
        case CardSuit::Clubs: return "Clubs";
        case CardSuit::Spades: return "Spades";
        default: return "Unknown";
    }
}

void Blackjack::printShoe() const {
    int cardCount = 0;

    std::cout << std::setw(15) << std::left << "Card Number" << std::setw(20) << std::left << "Card" << std::endl;
    std::cout << std::setw(40) << std::setfill('-') << "" << std::setfill(' ') << std::endl;

    for (const auto& card : shoe) {
        // Print each card's value and suit
        std::cout << std::setw(15) << std::left << cardCount++ << std::setw(20) << std::left
                  << cardValueToString(card.getValue()) + " of " + cardSuitToString(card.getSuit());

        // Print a new line for every 2 cards for better readability
        if (cardCount % 2 == 0) {
            std::cout << std::endl;
        }
    }

    std::cout << std::endl;
}