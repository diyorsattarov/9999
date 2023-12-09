#include <utilities/utilities.h>
#include <decision/decision.h>

std::string Utilities::playerDecisionToString(PlayerDecision decision) {
    switch (decision) {
        case PlayerDecision::Stand: return "Stand";
        case PlayerDecision::Hit: return "Hit";
        case PlayerDecision::Double: return "Double";
        case PlayerDecision::Split: return "Split";
        case PlayerDecision::Surrender: return "Surrender";
        default: return "Unknown";
    }
}

// Helper function to convert CardValue to string
std::string Utilities::cardValueToString(CardValue value) {
    switch (value) {
        case CardValue::Two: return "Two";
        case CardValue::Three: return "Three";
        case CardValue::Four: return "Four";
        case CardValue::Five: return "Five";
        case CardValue::Six: return "Six";
        case CardValue::Seven: return "Seven";
        case CardValue::Eight: return "Eight";
        case CardValue::Nine: return "Nine";
        case CardValue::Ten: return "Ten";
        case CardValue::Jack: return "Jack";
        case CardValue::Queen: return "Queen";
        case CardValue::King: return "King";
        case CardValue::Ace: return "Ace";
        default: return "Unknown";
    }
}

// Helper function to convert CardSuit to string
std::string Utilities::cardSuitToString(CardSuit suit) {
    switch (suit) {
        case CardSuit::Hearts: return "Hearts";
        case CardSuit::Diamonds: return "Diamonds";
        case CardSuit::Clubs: return "Clubs";
        case CardSuit::Spades: return "Spades";
        default: return "Unknown";
    }
}

void Utilities::clearLogFile(const std::string& filename) {
    std::ofstream file(filename, std::ofstream::out | std::ofstream::trunc);
    file.close();
}

std::shared_ptr<spdlog::logger> Utilities::logger = spdlog::stdout_color_mt("logger");  // Change to stdout_color_mt
static auto file_sink = std::make_shared<spdlog::sinks::basic_file_sink_mt>("logfile.txt");
std::shared_ptr<spdlog::logger> Utilities::combined_logger = std::make_shared<spdlog::logger>(
    "combined",
    spdlog::sinks_init_list{
        std::make_shared<spdlog::sinks::stdout_color_sink_mt>(),
        file_sink
    }
);

std::shared_ptr<spdlog::logger> Utilities::file_logger = std::make_shared<spdlog::logger>(
    "file_logger",
    spdlog::sinks_init_list{
        std::make_shared<spdlog::sinks::basic_file_sink_mt>("logfile.txt")
    }
);
