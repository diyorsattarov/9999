# Create a library target for card
add_library(card
    card/card.cpp
    ../include/card/card.h
)

# Include directories for card
target_include_directories(card PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Create a library target for deck
add_library(deck
    deck/deck.cpp
    ../include/deck/deck.h
)

# Include directories for deck
target_include_directories(deck PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_library(player
    player/player.cpp
    ../include/player/player.h
)

target_include_directories(player PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_library(blackjack
    blackjack/blackjack.cpp
    ../include/blackjack/blackjack.h
)

target_include_directories(blackjack PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_library(game
    game/game.cpp
    ../include/game/game.h
)

target_include_directories(game PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_library(dealer
    dealer/dealer.cpp
    ../include/dealer/dealer.h
)

target_include_directories(dealer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})