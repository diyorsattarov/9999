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
    for (int dealerCard=2; dealerCard <=11; ++dealerCard) ASSERT_EQ(decision.getDecision(8, dealerCard), PlayerDecision::Hit);
}
