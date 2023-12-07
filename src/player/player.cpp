#include <player/player.h>

Player::Player(int pId) : playerId(pId), balance(0) {}

int Player::getPlayerId() const { return playerId; }

void Player::addCard(const Card& card) {
    hand.push_back(card);
}