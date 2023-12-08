#include <decision/decision.h>

PlayerDecision Decision::getDecision(int playerTotal, int dealerUpCard) {
    if (playerTotal) {
        return PlayerDecision::Hit;
    }
    return PlayerDecision::Surrender;
}

// Decision::Decision() {
//     for (int dealerCard = 2; dealerCard <= 11; ++dealerCard) {
//         rules[std::make_pair(8, dealerCard)] = PlayerDecision::Hit;
//     }
// }
