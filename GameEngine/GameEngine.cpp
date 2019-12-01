#include "pch.h"
#include "List.h"	
#include <Windows.h>
#include "Player.h"
#include <stdlib.h> 
#include <ctime>
#include "HashTable.h"
#include "Vector.h"

void init_game();
bool exitKeyPressed();
void getInput();
void update();
void render();
void FillBoard();
void printBoard();
void SearchMine(int i, int j);
List <GameObject> goList;
int board[10][10];

void MergeSort(GameObject goArray[]) {

}

void Swapping(GameObject& a, GameObject& b) {
	//Switch positions between a and b
	GameObject temp;
	temp = a;
	a = b;
	b = temp;

}

void SelectionSort(GameObject goArray[], short size) {
	short i;
	short j;
	short minVal; //Min data
	for (i = 0; i < size - 1; i++) {
		minVal = i;
		for (j = i + 1; j < size; j++) {
			if (goArray[j].GetID() < goArray[minVal].GetID()) {
				minVal = j;
			}
		}
		//Swapping places with the minVal
		Swapping(goArray[i], goArray[minVal]);
	}
}

void Heapify(GameObject goarray[], int size, int i) {
	int largest = i; //Largest is the root when init
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	if (l < size && goarray[l].GetID() > goarray[largest].GetID()) {  // If left child is larger than root 
		largest = l;
	}
	if (r < size && goarray[r].GetID() > goarray[largest].GetID()) { // If right child is larger than largest so far 
		largest = r;
	}
	if (largest != i) { // If largest is not root 
		Swapping(goarray[i], goarray[largest]);
		Heapify(goarray, size, largest);
	}
}

void HeapSort(GameObject goArray[], short size) {
	//rearrange array
	for (int i = size / 2 - 1; i >= 0; i--) {
		Heapify(goArray, size, i);
	}
	for (int i = size - 1; i >= 0; i--) {
		Swapping(goArray[0], goArray[i]);
		Heapify(goArray, i, 0);
	}
}

int Partition(GameObject goArray[], int low, int high) {
	GameObject pivot;
	pivot = goArray[high];
	int i = (low - 1);
	for (int j = low; j <= high - 1; j++) {
		if (goArray[j].GetID() < pivot.GetID()) {
			i++;
			Swapping(goArray[i], goArray[j]);
		}
	}
	Swapping(goArray[i + 1], goArray[high]);
	return (i + 1);
}

void QuickSort(GameObject goArray[], int low, int high) {
	if (low < high) {
		int pIndex = Partition(goArray, low, high);
		QuickSort(goArray, low, pIndex - 1);
		QuickSort(goArray, pIndex + 1, high);
	}
}

void printArr(GameObject goArray[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << i << ": " << goArray[i].GetID() << " " << std::endl;
	}
}

int main() {
	GameObject go1(34343);
	GameObject go2(34344);
	GameObject go3(34345);
	GameObject go4(34346);
	GameObject go5(43434);
	HashTable<GameObject> ht(20);
	ht.assignIndex(go1);
	ht.assignIndex(go2);
	ht.assignIndex(go3);
	ht.assignIndex(go4);
	ht.assignIndex(go5);
	ht.DeleteAt(2);
	//init_game();
	/*while (1) {
		getInput();
		if (exitKeyPressed()) {
			break;
		}
		update();
		render();
	}*/

	GameObject goArray1[4];
	GameObject goArray2[4];
	GameObject goArray3[4];
	GameObject goArray4[4];

	goArray1[0] = go1;
	goArray1[1] = go2;
	goArray1[2] = go3;
	goArray1[3] = go4;

	goArray2[0] = go1;
	goArray2[1] = go2;
	goArray2[2] = go3;
	goArray2[3] = go4;

	goArray3[0] = go1;
	goArray3[1] = go2;
	goArray3[2] = go3;
	goArray3[3] = go4;

	goArray4[0] = go1;
	goArray4[1] = go2;
	goArray4[2] = go3;
	goArray4[3] = go4;
	return 0;
}

void init_game() {
	goList.Insert(GameObject(78));
	goList.Insert(Player(99));
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
		it = it->next;
	}
}

void render() {
}

void FillBoard() {
	board[rand() % 10][rand() % 10] = -1;
	board[rand() % 10][rand() % 10] = -1;
	board[rand() % 10][rand() % 10] = -1;
	board[rand() % 10][rand() % 10] = -1;
	board[rand() % 10][rand() % 10] = -1;
	board[rand() % 10][rand() % 10] = -1;
	board[rand() % 10][rand() % 10] = -1;
	board[rand() % 10][rand() % 10] = -1;
	board[rand() % 10][rand() % 10] = -1;
	board[rand() % 10][rand() % 10] = -1;
}

void printBoard() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			std::cout << board[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;
}

void SearchMine(int i, int j) {
	if (i < 9 && j < 9 && i > 0 && j > 0) {
		if (board[i + 1][j] == -1) {
			board[i][j] += 1;
		}
		if (board[i][j + 1] == -1) {
			board[i][j] += 1;
		}
		if (board[i - 1][j] == -1) {
			board[i][j] += 1;
		}
		if (board[i][j - 1] == -1) {
			board[i][j] += 1;
		}

		if (board[i + 1][j] == 0) {
			if (board[i][j] == 0) board[i][j] = -2;
			SearchMine(i + 1, j);
		}
		if (board[i][j + 1] == 0) {
			if (board[i][j] == 0) board[i][j] = -2;
			SearchMine(i, j + 1);
		}
		if (board[i - 1][j] == 0) {
			if (board[i][j] == 0) board[i][j] = -2;
			SearchMine(i - 1, j);
		}
		if (board[i][j - 1] == 0) {
			if (board[i][j] == 0) board[i][j] = -2;
			SearchMine(i, j - 1);
		}
	}
}