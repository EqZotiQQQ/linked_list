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
LinkedList<T>& LinkedList<T>::insertIn(T const& data, int num) {
	if (numberOfElements == 0) {
		Node<T>* current = new Node<T>(data, nullptr, nullptr);
		first = current;
		last = current;
		numberOfElements++;
	} else if (num >= numberOfElements) {
		Node<T>* current = new Node<T>(data, nullptr, last);
		last->next = current;
		last = current;
		numberOfElements++;
	} else if (num <= 0) {
		Node<T>* current = new Node<T>(data, first, nullptr);
		first->prev = current;
		first = current;
		numberOfElements++;
	} else {
		Node<T>* afterElem = first;
		Node<T>* beforeCurrent = first;
		for (int i = 0; i < num; i++) {
			afterElem = afterElem->next;
			beforeCurrent = beforeCurrent->next;
		}
		beforeCurrent = beforeCurrent->prev;
		Node<T>* current = new Node<T>(data, afterElem, beforeCurrent);
		afterElem->prev = current;
		beforeCurrent->next = current;		
		numberOfElements++;
	}
	return *this;
}


template<class T>
unsigned int LinkedList<T>::getNumber() {
	return numberOfElements;
}

























