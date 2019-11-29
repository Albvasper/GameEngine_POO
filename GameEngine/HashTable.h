#pragma once
#include "Node.h"
#include "Vector.h"

template <class T> class HashTable {
	private:
		Vector <T> vec;
		long hash;
		int index;

	public:
		int size;
		HashTable();
		HashTable(int _size);
		void assignIndex(GameObject go);
		/*Crea una funci�n para establecer un �ndice adecuado a partir de una llave que elijas, 
		no olvides incluir el	m�dulo (con respecto al size del vector) al c�lculo de esta funci�n.*/
		T GetValue(int index);
		void DeleteAt(int index);
		~HashTable();
};

template <class T> HashTable<T>::HashTable() {
}

template <class T> HashTable<T>::HashTable(int _size) {
	size = _size;
	vec.size = _size;
}

template <class T> void HashTable<T>::assignIndex(GameObject go) {
	hash = go.GetID() * go.GetID() * 1032322;
	index = hash % 11;
	vec.PushIndex(hash, index);
}

template <class T> T HashTable<T>::GetValue(int index) {
	vec.At(index);
}

template <class T> void HashTable<T>::DeleteAt(int index) {

}

template <class T> HashTable<T>::~HashTable() {
}

