#pragma once
#include "Node.h"
#include "Vector.h"

template <class T> class HashTable {
	private:
		//Vector vec;

	public:
		void assignIndex(int index); 
		/*Crea una función para establecer un índice adecuado a partir de una llave que elijas, 
		no olvides incluir el módulo (con respecto al size del vector) al cálculo de esta función.*/
		void GetValue(int index);
		void DeleteAt(int index);
};

template <class T> void HashTable<T>::assignIndex(int index) {
}

template <class T> void HashTable<T>::GetValue(int index) {
}

template <class T> void HashTable<T>::DeleteAt(int index) {
}
