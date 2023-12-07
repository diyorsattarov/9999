#ifndef UTILITIES_H
#define UTILITIES_H

#include <string>

#include <card/card.h>

class Utilities {
public:
    static std::string cardValueToString(CardValue value);
    static std::string cardSuitToString(CardSuit suit);
};

#endif