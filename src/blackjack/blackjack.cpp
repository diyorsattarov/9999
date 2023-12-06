#include <blackjack/blackjack.h>

Blackjack::Blackjack(int numDecks) {
    for (int i = 0; i < numDecks; ++i) {
        shoe.emplace_back(Deck());
    }
}

int Blackjack::getSize() const {
    return shoe.size();
}

void Blackjack::printShoe() const {
    int deckNumber = 1;
    for (const auto& deck: shoe) {
        std::cout << "Deck " << deckNumber++ << ":" << std::endl;
        for (const auto& card : deck.getCards()) {
            std::cout << "Card: " << static_cast<int>(card.getValue()) << " of "
                      << static_cast<int>(card.getSuit()) << std::endl;
        }
    }
}