#include "pch.h"
#include "List.h"	
#include <Windows.h>

void init_game();
bool exitKeyPressed();
void update();
List <GameObject> goList;

int main() {
	init_game();
	while (1) {
		if (exitKeyPressed()) {
			break;
			update();
		}
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
void update() {
	Node<GameObject> *it = goList.first;
	while (it){
		it->data.Update();
	}
}
//class Base {
//	public:
//		virtual void print() {
//			std::cout<< "Base" <<std::endl;
//		}
//};
//
//class Derivada : public Base {
//	public:
//		void print() {
//			std::cout << "Derivada" << std::endl;
//		}
//};
//
//class Derivada2 : public Derivada {
//	public:
//		void print2() {
//			std::cout << "lol" << std::endl;
//		}
//};	
//
//int main() {
//	Base* cb, ba;
//	cb = &ba;
//	cb->print();
//	Derivada d1;
//	cb = &d1; //Almacena la direccion de memoria de d1
//	static_cast <Derivada2*>(cb)->print2(); //Forma PRO de hacer casting
//    std::cout << "Hello World!\n";	
//}

