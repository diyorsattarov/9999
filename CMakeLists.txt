cmake_minimum_required(VERSION 3.10)

set(PROJECT_NAME cpp-blackjack)
project(${PROJECT_NAME})

add_subdirectory(src)

include_directories(include)

set(SOURCES
    src/card/card.cpp
    src/player/player.cpp
    src/blackjack/blackjack.cpp
    src/game/game.cpp
    src/dealer/dealer.cpp
    src/utilities/utilities.cpp
    src/decision/decision.cpp
    src/network/network.cpp
    src/network/server.cpp
    src/network/client.cpp
)

add_executable(tests
    ${SOURCES}
    #tests/card/test_card.cpp
    #tests/blackjack/test_blackjack.cpp
    #tests/player/test_player.cpp
    #tests/game/test_game.cpp
    #tests/decision/test_decision.cpp
    #tests/network/test_network.cpp
    tests/network/test_server.cpp
)

find_package(GTest REQUIRED)
find_package(spdlog REQUIRED)
find_package(Boost REQUIRED COMPONENTS system)

target_include_directories(tests PRIVATE ${GTEST_INCLUDE_DIRS} ${Boost_INCLUDE_DIRS})
target_link_libraries(tests PRIVATE ${GTEST_BOTH_LIBRARIES} pthread spdlog::spdlog Boost::system)

add_custom_target(run_tests COMMAND tests)