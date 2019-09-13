#include "linkedList.h"
#include "Node.h"

template<class T>
LinkedList<T>::LinkedList()
	: numberOfElements(0)
{
	first = last = nullptr;
}
template<class T>
void LinkedList<T>::addElement(T& data) {
	if (numberOfElements == 0) {
		Node* current = new Node(data, nullptr, nullptr);
		first = current;
		last = current;
	}
}

template<class T>
unsigned int LinkedList<T>::getNumber() {
	return numberOfElements;
}

























