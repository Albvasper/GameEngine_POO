#pragma once
#include "Node.h"

template <class T> class Vector {
	private:
		T** arr;
		int size;
		int current; 

	public:
		Vector<T>();
		Vector<T>(int _size);
		void Push(T val);
		void PushIndex(T val, int index);
		T At(int index);
		void Pop();
		int Size();
		int GetCapacity();
		void Print();
		~Vector<T>();
};

template <class T> Vector<T>::Vector() {
	arr = new T * [20];
	for (int i = 0; i < size; i++) {
		arr[i] = nullptr;
	}
}

template <class T> Vector<T>::Vector(int _size) {
	size = _size;
	arr = new T * [size];
	for (int i = 0; i < size; i++) {
		arr[i] = nullptr;
	}
}

template <class T> void Vector<T>::Push(T val) {
}

template <class T> void Vector<T>::PushIndex(T val, int index) {
	if (index >= size) {
		arr[index] = val;
	}
	else if (size < index) {
		std::cout << "Index too big!" << std::endl;
	}
}

template <class T> T Vector<T>::At(int index) {
	return T();
}

template <class T> void Vector<T>::Pop() {
}

template < class T> int Vector<T>::Size() {
	return 0;
}

template <class T> int Vector<T>::GetCapacity() {
	return 0;
}

template <class T> void Vector<T>::Print() {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " " << std::endl;
	}
}

template <class T> Vector<T>::~Vector() {

}