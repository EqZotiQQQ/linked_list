#include <iostream>
#include "linkedList.h"
#include "Node.h"

template<class T>
LinkedList<T>::LinkedList() {
	first = last = nullptr;
	numberOfElements = 0;
}

template<class T>
unsigned int LinkedList<T>::getNumber() {
	return numberOfElements;
}

template<class T>
LinkedList<T>& LinkedList<T>::pushback(T const& data) {
	if (numberOfElements == 0) {
		Node<T>* current = addIntoClearList(data);
	}
	else if (numberOfElements > 0) {
		Node<T>* current = addLastElement(data);
	}
	return *this;
}

template<class T>
LinkedList<T>& LinkedList<T>::pushfront(T const& data) {
	if (numberOfElements == 0) {
		Node<T>* current = addIntoClearList(data);
	}
	else if (numberOfElements > 0) {
		Node<T>* current = addFirstBegin(data);
	}
	return *this;
}

template<class T>
LinkedList<T>& LinkedList<T>::insertIn(T const& data, int number) {
	if (numberOfElements == 0) {
		Node<T>* current = addIntoClearList(data);
	}
	else if (number >= numberOfElements) {
		Node<T>* current = addLastElement(data);
	}
	else if (number <= 0) {
		Node<T>* current = addFirstBegin(data);
	}
	else {
		Node<T>* afterElem = first;
		Node<T>* beforeCurrent = first;
		for (int i = 0; i < number; i++) {
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
bool LinkedList<T>::removeElement(int number) {
	if (number < 0 || number > numberOfElements) {
		return false;
	}
	Node<T>* removableElem;
	if (number == 0) {
		removableElem = first;
		Node<T>* afterRemovable = first->next;
		afterRemovable->prev = nullptr;
	}
	else if (number == numberOfElements) {
		removableElem = last;
		Node<T>* beforeRemovable = last->prev;
		beforeRemovable->next = nullptr;
	}
	else {
		removableElem = first;
		for (int i = 0; i < number; i++) {
			removableElem = removableElem->next;
		}
		Node<T>* beforeCurrent = removableElem->prev;
		Node<T>* afterElem = removableElem->next;
		beforeCurrent->next = afterElem;
		afterElem->prev = beforeCurrent;
	}
	numberOfElements--;
	delete removableElem;
	return true;
}

template<class T>
void LinkedList<T>::printList() {
	Node<T>* node = first;
	for (int i = 0; i < numberOfElements; i++) {
		std::cout << node->data << std::endl;
		node = node->next;
	}
}

template<class T>
Node<T>* LinkedList<T>::addIntoClearList(T const& data) {
	Node<T>* current = new Node<T>(data, nullptr, nullptr);
	first = current;
	last = current;
	numberOfElements++;
	return current;
}

template<class T>
Node<T>* LinkedList<T>::addLastElement(T const& data) {
	Node<T>* current = new Node<T>(data, nullptr, last);
	last->next = current;
	last = current;
	numberOfElements++;
	return current;
}

template<class T>
Node<T>* LinkedList<T>::addFirstBegin(T const& data) {

	Node<T>* current = new Node<T>(data, first, nullptr);
	first->prev = current;
	first = current;
	numberOfElements++;
	return current;
}















