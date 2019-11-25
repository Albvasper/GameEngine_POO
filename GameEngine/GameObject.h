#pragma once
#include <iostream>
#include <stdlib.h> 

class GameObject {

	public:
		short id = 0;
		GameObject();
		virtual void Update();
		GameObject(short i): id(i) {}
		short GetID();
		~GameObject() {}

};

