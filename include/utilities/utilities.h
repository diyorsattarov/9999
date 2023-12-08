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

#include <gtest/gtest.h>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/basic_file_sink.h>

#include <card/card.h>

class Utilities {
public:
    static void clearLogFile(const std::string& filename);
    static std::string cardValueToString(CardValue value);
    static std::string cardSuitToString(CardSuit suit);
    static std::shared_ptr<spdlog::logger> logger;
    static std::shared_ptr<spdlog::logger> combined_logger;
    static std::shared_ptr<spdlog::logger> file_logger;
};

#endif