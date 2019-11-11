#include "pch.h"
#include "Player.h"

Player::Player() {

}

Player::Player(short i) : GameObject(i) {

}

void Player::Update() {
	std::cout << id << ": Update Player" << std::endl;
}

Player::~Player() {
}
