#include <gtest/gtest.h>
#include <game/game.h>
#include <player/player.h>

class GameTest : public ::testing::Test {
protected:
    Game game;
};

TEST_F(GameTest, GameMethodsTest) {
    // Assuming a standard shoe of 6 decks = 312 cards
    // blackjack.shuffle();
    //game.printShoe();
    ASSERT_EQ(game.getSize(), 312);
    ASSERT_EQ(game.getPlayerCt(), 0);
    Player firstPlayer(0);
    ASSERT_TRUE(game.addPlayer(firstPlayer));
    ASSERT_EQ(game.getPlayerCt(), 1);
    ASSERT_TRUE(game.removePlayer(0));
    ASSERT_FALSE(game.removePlayer(0));
    Player secondPlayer(1);
    ASSERT_TRUE(game.addPlayer(firstPlayer));
    ASSERT_TRUE(game.addPlayer(secondPlayer));
    ASSERT_EQ(game.getPlayerCt(), 2);
}
