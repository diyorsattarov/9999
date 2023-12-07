#include <algorithm>

#include <card/card.h>

Card::Card(CardValue value, CardSuit suit) : value(value), suit(suit) {}

CardValue Card::getValue() const {
    return value;
}

CardSuit Card::getSuit() const {
    return suit;
}

bool Card::operator==(const Card& other) const {
    return value == other.value && suit == other.suit;
}

// bool Card::operator!=(const Card& other) const {
//     return !(value == other.value && suit == other.suit);
// }

bool Card::operator!=(const Card& other) const {
    return !(*this == other);
}

