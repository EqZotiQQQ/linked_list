#include "Node.h"

template<class T>
Node<T>::Node(Node& next, Node& prev, T& data) {
this->next = next;
this->prev = prev;
this->data = data;
}

template<class T>
Node<T>::~Node() {
}
