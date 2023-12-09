#include <utilities/utilities.h>
#include <game/game.h>

class GameTest : public ::testing::Test {
    void SetUp() override {
        Utilities::clearLogFile("logfile.txt");
    }
protected:
    Game game;
};

TEST_F(GameTest, GameMethodsTest) {
    Player firstPlayer(0);
    Player secondPlayer(1);
    Player thirdPlayer(2);
    Player fourthPlayer(3);
    Player fifthPlayer(4);
    Player sixthPlayer(5);
    Player seventhPlayer(6);
    Player eighthPlayer(7);
    game.addPlayer(firstPlayer);
    game.addPlayer(secondPlayer);
    game.addPlayer(thirdPlayer);
    game.addPlayer(fourthPlayer);
    game.addPlayer(fifthPlayer);
    game.addPlayer(sixthPlayer);
    game.addPlayer(seventhPlayer);
    Utilities::logger->info("Player ct: {}", game.getPlayerCt());
    game.startGame();
    //game.printShoe();
}
