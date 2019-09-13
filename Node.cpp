#include "Node.h"

template<class T>
Node<T>::Node(T& data, Node* next, Node* prev) {
this->next = next;
this->prev = prev;
this->data = data;
}

template<class T>
Node<T>::~Node() {
}
