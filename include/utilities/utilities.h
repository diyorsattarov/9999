#ifndef UTILITIES_H
#define UTILITIES_H

#include <string>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <card/card.h>

class Utilities {
public:
    static std::string cardValueToString(CardValue value);
    static std::string cardSuitToString(CardSuit suit);
    static std::shared_ptr<spdlog::logger> logger;
};

#endif