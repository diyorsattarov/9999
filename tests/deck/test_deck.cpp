#include <gtest/gtest.h>
#include <deck/deck.h>

class DeckTest : public ::testing::Test {
protected:
    Deck deck;
};

TEST_F(DeckTest, DeckInitialization) {
    // Assuming a standard deck of 52 cards
    ASSERT_EQ(deck.getSize(), 52);
}
