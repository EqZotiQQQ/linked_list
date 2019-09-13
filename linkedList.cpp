#include "linkedList.h"



template<class T>
void LinkedList<T>::addElement(const T& data) {
	if (numberOfElements == 0) {
		Node* current = new Node;
		current.data = data;
		first = current;
		last = current;
	}
}

template<class T>
unsigned int LinkedList<T>::getNumber() {
	return numberOfElements;
}

























