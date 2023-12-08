#pragma once
#ifndef DECISION_H
#define DECISION_H

#include <utilities/utilities.h>

enum class PlayerDecision {
    Hit,
    Stand, 
    Split,
    Double,
    Surrender
};

class Decision {
public:
    PlayerDecision getDecision(int playerTotal, int dealerUpCard);
private:
};
#endif //DECISION_H