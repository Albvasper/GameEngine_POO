#include "pch.h"
#include "Player.h"

Player::Player() {

}

Player::Player(short i) : GameObject() {

}

void Player::Update() {
	std::cout << "Update GameObject" << std::endl;
}

Player::~Player() {
}
