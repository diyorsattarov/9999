#pragma once
#ifndef CARD_H
#define CARD_H

enum class CardValue {
    Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace
};

enum class CardSuit {
    Hearts, Diamonds, Clubs, Spades
};

class Card {
private:
    CardValue value;
    CardSuit suit;
    bool faceUp;
public:
    Card(CardValue value, CardSuit suit);
    CardValue getValue() const;
    CardSuit getSuit() const;
    bool operator==(const Card& other) const;
    bool operator!=(const Card& other) const;
};
#endif