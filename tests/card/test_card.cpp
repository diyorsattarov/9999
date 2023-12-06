#include <gtest/gtest.h>
#include <card/card.h>

// enum class CardValue { Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace };

// enum class CardSuit { Hearts, Diamonds, Clubs, Spades };


class CardTest : public ::testing::Test {
protected:
    // You can add setup code here if needed
};

// Test constructor and getter methods
TEST_F(CardTest, ConstructorAndGetters) {
    Card card(CardValue::Two, CardSuit::Hearts);

    EXPECT_EQ(card.getValue(), CardValue::Two);
    EXPECT_EQ(card.getSuit(), CardSuit::Hearts);
}

TEST_F(CardTest, EqualityOperator) {
    Card card1(CardValue::Two, CardSuit::Hearts);
    Card card2(CardValue::Two, CardSuit::Hearts);

    EXPECT_EQ(card1, card2);
}

TEST_F(CardTest, InequalityOperator) {
    Card card1(CardValue::Two, CardSuit::Hearts);
    Card card2(CardValue::Three, CardSuit::Diamonds);

    EXPECT_NE(card1, card2);
}

TEST_F(CardTest, HighestValues) {
    Card card(CardValue::Ace, CardSuit::Spades);

    EXPECT_EQ(card.getValue(), CardValue::Ace);
    EXPECT_EQ(card.getSuit(), CardSuit::Spades);
}
