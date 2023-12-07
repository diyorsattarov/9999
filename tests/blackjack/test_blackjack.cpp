#include <gtest/gtest.h>
#include <blackjack/blackjack.h>

class BlackjackTest : public ::testing::Test {
protected:
    Blackjack blackjack;
};

TEST_F(BlackjackTest, BlackjackShoeSize) {
    // Assuming a standard deck of 52 cards
    blackjack.shuffle();
    blackjack.printShoe();
    ASSERT_EQ(blackjack.getSize(), 312);
}
