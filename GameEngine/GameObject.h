#pragma once
#include <iostream>
#include <stdlib.h> 

class GameObject {

	public:
		int id = 0;
		int subArrID = 0;
		GameObject();
		GameObject(int _id);
		virtual void Update();
		GameObject(short i): id(i) {}
		int GetID();
		int GetSubID();
		~GameObject() {}

};

