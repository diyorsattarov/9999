#include <deck/deck.h>

Deck::Deck() {
    for (int suit = 0; suit < 4; ++suit) {
        for(int value = 0; value < 13; ++value) {
            cards.emplace_back(static_cast<CardValue>(value), static_cast<CardSuit>(suit));
        }
    }
}

int Deck::getSize() const {
    return cards.size();
}

const std::vector<Card>& Deck::getCards() const {
    return cards;
}