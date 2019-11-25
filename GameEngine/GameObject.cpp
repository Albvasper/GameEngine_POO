#include "pch.h"
#include "GameObject.h"

GameObject::GameObject() {
	id = rand() % 10 + 1;
}

void GameObject::Update() {
	std::cout << id << ": Update GameObject" << std::endl;
}

short GameObject::GetID() {
	return id;
}