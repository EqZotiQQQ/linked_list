#include "Node.h"

template<class T>
Node<T>::Node(T const & data, Node* next, Node* prev) {
	this->next = next;
	this->prev = prev;
	this->data = data;
}

template<class T>
Node<T>::~Node() {
}
