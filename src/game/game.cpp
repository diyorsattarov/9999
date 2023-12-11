#include <game/game.h>

Game::Game(int numDecks) : Blackjack(numDecks) {}

void Game::startGame() {
    /*
     * Start of a new game:
     * 1) Dealer is dealt 1 card face up.
     * 2) Players are dealt 1st card face up.
     * 3) Players are dealt 2nd card face up.
     * 4) Dealer is dealt 2nd card face down.
     *
     * Triggers for starting a new game:
     * - Previous game ends.
     * - Other specific conditions.
     */
     playGame();
}

void Game::playGame() {
    /*
     * Start of a new round:
     * - Initialization for player decisions.
     * - Starting from position 1, players make decisions: hit / stand / split / double / fold.
     */
    dealInitialCards();
    processPlayerDecisions();
}

void Game::endGame() {
    /*
     * End of the game:
     * - No players remain on the table.
     * - The shoe has reached the end.
     *
     * Additional details about handling winnings/losses or other relevant actions.
     */
}

void Game::dealInitialCards() {
    dealer.addCard(deal());
    std::vector<Player>& gamePlayers = getPlayers();
    for (Player& player: gamePlayers) player.addCard(deal());
    for (Player& player: gamePlayers) player.addCard(deal());
    dealer.addCard(deal());
    dealer.printHand();
}

void Game::processPlayerDecisions() {
    const std::vector<Player>& players = this->getPlayers();

    // // Iterate through each player and process their decision
    // for (const Player& player : players) {
    //     player.printHand();  // Display the player's hand

    //     // Get the decision for the current player from the Decision class
    //     PlayerDecision decision = decision.getDecision(player, /* dealer's up card */);

    //     // Perform actions based on the decision
    //     switch (decision) {
    //         case PlayerDecision::Stand:
    //             // Perform logic for the player choosing to stand
    //             break;
    //         case PlayerDecision::Hit:
    //             // Perform logic for the player choosing to hit
    //             break;
    //         case PlayerDecision::Double:
    //             // Perform logic for the player choosing to double down
    //             break;
    //         case PlayerDecision::Split:
    //             // Perform logic for the player choosing to split
    //             break;
    //         case PlayerDecision::Surrender:
    //             // Perform logic for the player choosing to surrender
    //             break;
    //         // Add additional cases as needed for your specific game rules
    //         default:
    //             // Handle any unexpected decision
    //             break;
    //     }
    // }
}


void Game::processDealerTurn() {
    
}