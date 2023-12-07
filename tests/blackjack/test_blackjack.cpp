#include <gtest/gtest.h>
#include <blackjack/blackjack.h>

class BlackjackTest : public ::testing::Test {
protected:
    Blackjack blackjack;
};

TEST_F(BlackjackTest, BlackjackShoeSize) {
    // Assuming a standard shoe of 6 decks = 312 cards
    // blackjack.shuffle();
    //blackjack.printShoe();
    ASSERT_EQ(blackjack.getSize(), 312);
}
