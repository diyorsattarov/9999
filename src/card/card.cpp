Card::Card(CardValue value, CardSuit suit) : value(value), suit(suit) {}

CardValue Card::getValue() const {
    return value;
}

CardSuit Card::getSuit() const {
    return suit;
}