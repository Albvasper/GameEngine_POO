#pragma once
#include "GameObject.h"
#include <iostream>

class Player : public GameObject{

	public:
		Player();
		Player(short i);
		void Update();
		~Player();

};

