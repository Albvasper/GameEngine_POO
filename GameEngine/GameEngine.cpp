#include "pch.h"
#include "List.h"	
#include <Windows.h>

void init_game();
bool exitKeyPressed();
void getInput();
void update();
void render();
List <GameObject> goList;

int main() {
	init_game();
	while (1) {
		getInput();
		if (exitKeyPressed()) {
			break;
		}
		update();
		render();
	}
	std::cout << "Hello World!" << std::endl;
}

void init_game() {
	goList.Insert(GameObject());
	goList.Insert(GameObject());
	goList.printSize();
}

bool exitKeyPressed() {
	return (GetKeyState(VK_ESCAPE) & 0x800);
}

void getInput() {
}

void update() {
	Node<GameObject> *it = goList.first;
	while (it){
		it->data.Update();
	}
}

void render() {
}
