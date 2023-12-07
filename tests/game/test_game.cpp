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
    Player thirdPlayer(2);
    Player fourthPlayer(3);
    Player fifthPlayer(4);
    Player sixthPlayer(5);
    Player seventhPlayer(6);
    Player eighthPlayer(7);
    game.addPlayer(thirdPlayer);
    game.addPlayer(fourthPlayer);
    game.addPlayer(fifthPlayer);
    game.addPlayer(sixthPlayer);
    game.addPlayer(seventhPlayer);
    std::cout << game.getPlayerCt() << std::endl;
    ASSERT_FALSE(game.addPlayer(eighthPlayer));
}
