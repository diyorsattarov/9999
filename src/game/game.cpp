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
}

void Game::startRound() {
    /*
     * Start of a new round:
     * - Initialization for player decisions.
     * - Starting from position 1, players make decisions: hit / stand / split / double / fold.
     */
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
