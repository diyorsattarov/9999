# Create a library target for card
add_library(card
    card/card.cpp
    ../include/card/card.h
)

# Include directories for card
target_include_directories(card PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
