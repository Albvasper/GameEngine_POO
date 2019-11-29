#pragma once
#include "Node.h"

template <class T> class Vector {
	private:
		T** arr;
		int size;
		int current; 
		int last;

	public:
		Vector<T>();
		Vector<T>(int _size);
		void PushIndex(T val, int index);
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

template <class T> void Vector<T>::PushIndex(T val, int index) {
	if (index >= size) {
		arr[index] = val;
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
	arr[last] = NULL;
}

template <class T> void Vector<T>::PopAt(int index) {
	arr[index] = NULL;
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