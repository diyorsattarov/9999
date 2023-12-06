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