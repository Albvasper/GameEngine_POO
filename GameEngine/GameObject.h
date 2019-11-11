#pragma once
#include <iostream>

class GameObject {

	public:
		short id;
		GameObject() {}
		virtual void Update();
		GameObject(short i): id(i) {}
		~GameObject() {}

};

