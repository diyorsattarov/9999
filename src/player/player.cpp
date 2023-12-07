#include <player/player.h>

Player::Player(int pId) : playerId(pId), balance(0) {}

int Player::getPlayerId() const { return playerId; }