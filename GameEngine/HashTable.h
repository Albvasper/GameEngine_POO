#pragma once
#include "Node.h"
#include "Vector.h"

template <class T> class HashTable {
	private:
		//Vector vec;

	public:
		void assignIndex(int index); 
		/*Crea una funci�n para establecer un �ndice adecuado a partir de una llave que elijas, 
		no olvides incluir el m�dulo (con respecto al size del vector) al c�lculo de esta funci�n.*/
		void GetValue(int index);
		void DeleteAt(int index);
};

template <class T> void HashTable<T>::assignIndex(int index) {
}

template <class T> void HashTable<T>::GetValue(int index) {
}

template <class T> void HashTable<T>::DeleteAt(int index) {
}
