#pragma once
#include "Node.h"

template <class T> class Vector {
	private:
		T** arr;
		int current; 
		int last;

	public:
		int size;
		Vector<T>();
		Vector<T>(int _size);
		void PushIndex(GameObject val, int unsigned index);
		void PushIndex(GameObject val, int index);
		T At(int index);
		void Pop();
		void PopAt(int index);
		int NumberOfElements();
		int GetCapacity();
		void Print();
		~Vector<T>();
};

template <class T> Vector<T>::Vector() {
	arr = new T * [20];
	for (int i = 0; i < size; i++) {
		arr[i] = nullptr;
	}
	//last = 20;
}

template <class T> Vector<T>::Vector(int _size) {
	size = _size;
	last = _size;
	arr = new T * [size];
	for (int i = 0; i < size; i++) {
		arr[i] = nullptr;
	}
	//last = size;
}

template <class T> void Vector<T>::PushIndex(GameObject val, int unsigned index) {
	if (index < size) {
		if (arr[index] != nullptr) {
			val.subArrID = val.subArrID + 1;
			arr[index][val.subArrID] = val;
		}
		else if (arr[index] == nullptr) {
			arr[index] = &val;
		}
	}
	else if (size < index) {
		std::cout << "Index too big!" << std::endl;
	}
	last = index;
}

template <class T> T Vector<T>::At(int index) {
	return arr[index];
}

template <class T> void Vector<T>::Pop() {
	arr[size] = nullptr;
	//arr[last] = nullptr;
	size = size - 1;
}

template <class T> void Vector<T>::PopAt(int index) {
	arr[index] = nullptr;
	size = size - 1;
}

template <class T> int Vector<T>::NumberOfElements() {
	return 0;
}

template <class T> int Vector<T>::GetCapacity() {
	return size;
}

template <class T> void Vector<T>::Print() {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " " << std::endl;
	}
}

template <class T> Vector<T>::~Vector() {

}