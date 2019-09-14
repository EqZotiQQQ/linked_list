#include "linkedList.h"
#include "Node.h"

template<class T>
LinkedList<T>::LinkedList() {
	first = last = nullptr;
	numberOfElements = 0;
}

template<class T>
LinkedList<T>& LinkedList<T>::pushback(T const & data) {
	if (numberOfElements == 0) {
		Node<T>* current = new Node<T>(data, nullptr, nullptr);
		first = current;
		last = current;
		numberOfElements++;
	} else if (numberOfElements > 0) {
		Node<T>* current = new Node<T>(data, nullptr, last);
		last->next = current;
		last = current;
		numberOfElements++;
	}
	return *this;
}

template<class T>
LinkedList<T>& LinkedList<T>::pushfront(T const& data) {
	if (numberOfElements == 0) {
		Node<T>* current = new Node<T>(data, nullptr, nullptr);
		first = current;
		last = current;
		numberOfElements++;
	}
	else if (numberOfElements > 0) {
		Node<T>* current = new Node<T>(data, first, nullptr);
		first->prev= current;
		first = current;
		numberOfElements++;
	}


	return *this;
}

template<class T>
unsigned int LinkedList<T>::getNumber() {
	return numberOfElements;
}

























