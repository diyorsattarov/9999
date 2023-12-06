cmake_minimum_required(VERSION 3.10)

set(PROJECT_NAME cpp-blackjack)
project(${PROJECT_NAME})

add_subdirectory(src)

include_directories(include)

set(SOURCES
    src/card/card.cpp
    src/deck/deck.cpp
    src/player/player.cpp
    src/blackjack/blackjack.cpp
)

add_executable(tests
    ${SOURCES}
    tests/card/test_card.cpp
    tests/deck/test_deck.cpp
)

find_package(GTest REQUIRED)

target_include_directories(tests PRIVATE ${GTEST_INCLUDE_DIRS})
target_link_libraries(tests PRIVATE ${GTEST_BOTH_LIBRARIES} pthread)

add_custom_target(run_tests COMMAND tests)