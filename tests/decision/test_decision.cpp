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
    Player player(1);
    Player player2(2);
    Dealer dealer;
    dealer.dealerId = 1;

    for (int dealerCard = 0; dealerCard <= 12; ++dealerCard) {
        if (dealerCard >= 9 && dealerCard < 12) {
            continue;
        }
        dealer.clearHand();
        dealer.addCard(Card(static_cast<CardValue>(dealerCard), CardSuit::Spades));
        dealer.printHand();
        // playerHand 8-17

        for (int playerCard = 0; playerCard <= 7; ++playerCard) {
            player.clearHand();
            player.addCard(Card(CardValue::Ace, CardSuit::Hearts));
            player.addCard(Card(static_cast<CardValue>(playerCard), CardSuit::Spades));
            player.printHand();
            if(player.getHand().back().getValue() == CardValue::Eight) {
                ASSERT_EQ(decision.getDecision(player, dealerCard), PlayerDecision::Stand);
                Utilities::file_logger->info("Hand: ({}, {}) Decision: {}",
                             Utilities::cardValueToString(player.getHand().front().getValue()),
                             Utilities::cardValueToString(player.getHand().back().getValue()),
                             Utilities::playerDecisionToString(decision.getDecision(player, dealerCard)));

            }
        }
        // pairs
        for (int playerCard2 = 0; playerCard2 <= 12; ++playerCard2) {
            if (playerCard2 >= 9 && playerCard2 < 12) {
                continue;
            }
            player2.clearHand();
            player2.addCard(Card(static_cast<CardValue>(playerCard2), CardSuit::Spades));
            player2.addCard(Card(static_cast<CardValue>(playerCard2), CardSuit::Spades));
            player2.printHand();
            if (player2.getHand().front().getValue() == CardValue::Ten) {
                ASSERT_EQ(decision.getDecision(player2, dealerCard), PlayerDecision::Stand);
                Utilities::file_logger->info("Hand: ({}, {}) Decision: {}",
                             Utilities::cardValueToString(player2.getHand().front().getValue()),
                             Utilities::cardValueToString(player2.getHand().back().getValue()),
                             Utilities::playerDecisionToString(decision.getDecision(player2, dealerCard)));
            }

        }
    }
}