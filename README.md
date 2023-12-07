# cpp-blackjack

Welcome to cpp-blackjack, a C++ project designed to bring the classic card game Blackjack to life in a flexible and extensible manner. This project is built with a focus on creating a modular and readable structure, allowing for easy simulation and extension of Blackjack gameplay.

## Table of Contents

- [Project Name](#project-name)
  - [Table of Contents](#table-of-contents)
  - [Introduction](#introduction)
  - [Getting Started](#getting-started)
    - [Prerequisites](#prerequisites)
    - [Installation](#installation)
  - [Usage](#usage)
  - [Features](#features)
  - [Contributing](#contributing)
  - [License](#license)
  - [Acknowledgments](#acknowledgments)

## Introduction

The world of cpp-blackjack opens the doors to a well-organized and feature-rich implementation of Blackjack. Whether you're a developer looking to understand the mechanics of the game or a contributor eager to enhance and extend the project, cpp-blackjack provides a solid foundation.

## Getting Started

Getting started is a breeze! Simply clone the repository and follow our straightforward installation instructions. With just a few steps, you'll be running and testing the cpp-blackjack project on your local machine.

```
git clone https://github.com/diyooor/cpp-blackjack.git
```

### Prerequisites

1. CMake
1. GoogleTest
1. spdlog

### Installation

```
mkdir build && cd build
```

```
cmake .. 
```

```
make tests
```

## Usage

For Linux users
```
make tests
```

For Windows users:
```
ninja tests
```

## Demo
```
➜  build git:(dev) ✗ ./tests
Running main() from ./googletest/src/gtest_main.cc
[==========] Running 8 tests from 5 test suites.
[----------] Global test environment set-up.
[----------] 4 tests from CardTest
[ RUN      ] CardTest.ConstructorAndGetters
[       OK ] CardTest.ConstructorAndGetters (0 ms)
[ RUN      ] CardTest.EqualityOperator
[       OK ] CardTest.EqualityOperator (0 ms)
[ RUN      ] CardTest.InequalityOperator
[       OK ] CardTest.InequalityOperator (0 ms)
[ RUN      ] CardTest.HighestValues
[       OK ] CardTest.HighestValues (0 ms)
[----------] 4 tests from CardTest (0 ms total)

[----------] 1 test from DeckTest
[ RUN      ] DeckTest.DeckInitialization
[       OK ] DeckTest.DeckInitialization (0 ms)
[----------] 1 test from DeckTest (0 ms total)

[----------] 1 test from BlackjackTest
[ RUN      ] BlackjackTest.BlackjackShoeSize
[       OK ] BlackjackTest.BlackjackShoeSize (0 ms)
[----------] 1 test from BlackjackTest (0 ms total)

[----------] 1 test from PlayerTest
[ RUN      ] PlayerTest.PlayerInitialization
[       OK ] PlayerTest.PlayerInitialization (0 ms)
[----------] 1 test from PlayerTest (0 ms total)

[----------] 1 test from GameTest
[ RUN      ] GameTest.GameMethodsTest
7
[2023-12-07 15:44:06.337] [combined] [info] Player 0's Hand:
[2023-12-07 15:44:06.337] [combined] [info] Eight of Diamonds
[2023-12-07 15:44:06.337] [combined] [info] King of Hearts
[2023-12-07 15:44:06.337] [combined] [info] 
[2023-12-07 15:44:06.337] [combined] [info] Player 1's Hand:
[2023-12-07 15:44:06.337] [combined] [info] Four of Spades
[2023-12-07 15:44:06.337] [combined] [info] Seven of Spades
[2023-12-07 15:44:06.337] [combined] [info] 
[2023-12-07 15:44:06.337] [combined] [info] Player 2's Hand:
[2023-12-07 15:44:06.337] [combined] [info] Six of Spades
[2023-12-07 15:44:06.337] [combined] [info] Six of Spades
[2023-12-07 15:44:06.337] [combined] [info] 
[2023-12-07 15:44:06.337] [combined] [info] Player 3's Hand:
[2023-12-07 15:44:06.337] [combined] [info] Ten of Hearts
[2023-12-07 15:44:06.337] [combined] [info] Ace of Clubs
[2023-12-07 15:44:06.337] [combined] [info] 
[2023-12-07 15:44:06.337] [combined] [info] Player 4's Hand:
[2023-12-07 15:44:06.337] [combined] [info] Six of Spades
[2023-12-07 15:44:06.337] [combined] [info] Jack of Clubs
[2023-12-07 15:44:06.337] [combined] [info] 
[2023-12-07 15:44:06.337] [combined] [info] Player 5's Hand:
[2023-12-07 15:44:06.337] [combined] [info] Ten of Spades
[2023-12-07 15:44:06.337] [combined] [info] Four of Hearts
[2023-12-07 15:44:06.337] [combined] [info] 
[2023-12-07 15:44:06.337] [combined] [info] Player 6's Hand:
[2023-12-07 15:44:06.337] [combined] [info] Eight of Hearts
[2023-12-07 15:44:06.337] [combined] [info] Eight of Spades
[2023-12-07 15:44:06.337] [combined] [info] 
[       OK ] GameTest.GameMethodsTest (1 ms)
[----------] 1 test from GameTest (1 ms total)

[----------] Global test environment tear-down
[==========] 8 tests from 5 test suites ran. (2 ms total)
[  PASSED  ] 8 tests.
```

## Features

- Deck Management: The project includes a robust implementation of a deck management system, allowing for the creation and manipulation of multiple decks of standard playing cards.
- Player Interaction: Players can be easily added and managed within the game. The system supports player actions such as receiving cards, making bets, and deciding whether to hit or stand.
- Game Logic: The core logic of Blackjack, including dealing cards, scoring hands, and determining winners and losers, is implemented in a clean and modular fashion.
- Shuffling Algorithm: A shuffling algorithm is integrated to randomize the order of cards in the deck, providing a realistic and unpredictable gaming experience.

## Contributing

## License

This project is licensed under the [MIT License](LICENSE.md) - see the [LICENSE.md](LICENSE.md) file for details.

## Acknowledgments