#include <gtest/gtest.h>
#include <player/player.h>

class PlayerTest : public ::testing::Test {
protected:
};

TEST_F(PlayerTest, PlayerInitialization) {
    // Create 6 players with increasing player IDs
    std::vector<Player> players;
    for (int i = 0; i < 6; ++i) {
        players.emplace_back(i);
    }

    // Check if player IDs are assigned correctly
    for (int i = 0; i < 6; ++i) {
        EXPECT_EQ(players[i].getPlayerId(), i);
    }
}
