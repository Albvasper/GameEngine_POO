#pragma once
#include "Node.h"
#include "Vector.h"

template <class T> class HashTable {
	private:
		Vector <T>* vec;
		long unsigned hash;
		int unsigned index;

	public:
		int size;
		HashTable();
		HashTable(int _size);
		void assignIndex(GameObject go);
		T GetValue(int index);
		void DeleteAt(int index);
		~HashTable();
};

template <class T> HashTable<T>::HashTable() {

}

template <class T> HashTable<T>::HashTable(int _size) {
	size = _size;
	vec = new Vector <T>(size);
	vec->size = _size;
}

template <class T> void HashTable<T>::assignIndex(GameObject go) {
	hash = go.GetID() * go.GetID() * 1032322;
	index = hash % vec->GetCapacity();
	vec->PushIndex(go, index);

	std::cout << "El codigo hash es: " << hash << std::endl;
	std::cout << "El indice es: " << index << std::endl;
}

template <class T> T HashTable<T>::GetValue(int index) {
	vec->At(index);
}

template <class T> void HashTable<T>::DeleteAt(int index) {
	vec->PopAt(index);
}

template <class T> HashTable<T>::~HashTable() {
}

