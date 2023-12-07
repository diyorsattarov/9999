# cpp-blackjack

cpp-blackjack is a C++ project that implements the classic card game Blackjack. The project focuses on creating a flexible and extensible structure for simulating Blackjack gameplay, with an emphasis on modularity and readability.

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


## Getting Started

```
git clone https://github.com/diyooor/cpp-blackjack.git
```

### Prerequisites

1. CMake
1. GoogleTest


### Installation

```
mkdir build && cd build
```

```
cmake .. 
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

## Features

- Deck Management: The project includes a robust implementation of a deck management system, allowing for the creation and manipulation of multiple decks of standard playing cards.
- Player Interaction: Players can be easily added and managed within the game. The system supports player actions such as receiving cards, making bets, and deciding whether to hit or stand.
- Game Logic: The core logic of Blackjack, including dealing cards, scoring hands, and determining winners and losers, is implemented in a clean and modular fashion.
- Shuffling Algorithm: A shuffling algorithm is integrated to randomize the order of cards in the deck, providing a realistic and unpredictable gaming experience.

## Contributing

## License

This project is licensed under the [MIT License](LICENSE.md) - see the [LICENSE.md](LICENSE.md) file for details.

## Acknowledgments