#pragma once
#ifndef UTILITIES_H
#define UTILITIES_H

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <random>
#include <chrono>
#include <unordered_map>

#include <gtest/gtest.h>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/basic_file_sink.h>

#include <card/card.h>
#include <player/player.h>
#include <dealer/dealer.h>

enum class PlayerDecision;

class Utilities {
public:
    static std::string playerDecisionToString(PlayerDecision decision);
    static std::string cardValueToString(CardValue value);
    static std::string cardSuitToString(CardSuit suit);
    static void clearLogFile(const std::string& filename);
    static std::shared_ptr<spdlog::logger> logger;
    static std::shared_ptr<spdlog::logger> combined_logger;
    static std::shared_ptr<spdlog::logger> file_logger;
};

#endif