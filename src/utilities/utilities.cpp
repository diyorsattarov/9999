#include <utilities/utilities.h>

// Helper function to convert CardValue to string
std::string Utilities::cardValueToString(CardValue value) {
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
std::string Utilities::cardSuitToString(CardSuit suit) {
    switch (suit) {
        case CardSuit::Hearts: return "Hearts";
        case CardSuit::Diamonds: return "Diamonds";
        case CardSuit::Clubs: return "Clubs";
        case CardSuit::Spades: return "Spades";
        default: return "Unknown";
    }
}
