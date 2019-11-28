#pragma once
#include "Node.h"

template <class T> class Vector {
	private:
		T** arr;
		int size;
		int current; 

	public:
		Vector<T>();
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
}

template <class T> Vector<T>::~Vector() {
}

template <class T> void Vector<T>::Push(T val) {
}

template <class T> void Vector<T >::PushIndex(T val, int index) {
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
