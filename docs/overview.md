# CPP-BLACKJACK
This project is the implementation of the card game blackjack

## Design
- 6 deck blackjack

## Abstraction
### class Card
- Card Value (Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace)
- Card Suit (Hearts, Diamonds, Clubs, Spades)

### class Deck
- vector Card

### class Player
- int playerId
- vector Card

### class Blackjack
- vector Card
- vector Player

- shuffle method
- print method (for testing)

the deal method:
    - take bets
    initial deal
    - deal one face up card for dealer
    - deal 1 card for each player
    - deal another card for each player
    - deal 1 face down card for dealer


todo:
- deal method
- game logic
- player logic
- monetary logic
- logging 

## Project Directory Structure
```
cpp-blackjack/
|-- build/
|-- include/
|   |-- blackjack/
|   |   |-- blackjack.h
|   |-- card/
|   |   |-- card.h
|   |-- game/
|   |   |-- game.h
|   |-- player/
|   |   |-- player.h
|   |-- utilities/
|       |-- utilities.h
|-- src/
|   |-- blackjack/
|   |   |-- blackjack.cpp
|   |-- card/
|   |   |-- card.cpp
|   |-- game/
|   |   |-- game.cpp
|   |-- player/
|   |   |-- player.cpp
|   |-- utilities/
|       |-- utilities.cpp
|-- tests/
|   |-- test_blackjack.cpp
|   |-- test_game.cpp
|   |-- test_player.cpp
|-- CMakeLists.txt
```