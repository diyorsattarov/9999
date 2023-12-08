#include <utilities/utilities.h>
#include <decision/decision.h>

class DecisionTest : public ::testing::Test {
    void SetUp() override {
        Utilities::clearLogFile("logfile.txt");
    }
protected:
    Decision decision;
};

TEST_F(DecisionTest, DecisionsTest) {
    // Create a new player
    Player player(1);

    // Add a 7 and a 10 to the player's hand
    player.addCard(Card(CardValue::Seven, CardSuit::Hearts));
    player.addCard(Card(CardValue::Ten, CardSuit::Spades));

    // Test the decision for the player's hand against a dealer card of 10
    ASSERT_EQ(decision.getDecision(player, 10), PlayerDecision::Stand);
}