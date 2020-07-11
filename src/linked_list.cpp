#include <iostream>
#include <exception>

#include "linked_list.h"
#include "node.h"

template<class T>
LinkedList<T>::LinkedList() {
    head = tail = nullptr;
    size = 0;
}

template<class T>
LinkedList<T>::~LinkedList() {
    while (size > 0) {
    this->popback();
    }
}

template<class T>
unsigned int LinkedList<T>::getNumber() {
    return size;
}

template<class T>
LinkedList<T>& LinkedList<T>::pushback(T const& data) {
    if (size == 0) {
        Node<T>* current = addIntoEmptyList(data);
    }
    else if (size > 0) {
        Node<T>* current = addIntoTail(data);
    }
    return *this;
}

template<class T>
LinkedList<T>& LinkedList<T>::pushfront(T const& data) {
    if (size == 0) {
        Node<T>* current = addIntoEmptyList(data);
    }
    else if (size > 0) {
        Node<T>* current = addIntoHead(data);
    }
    return *this;
}

template<class T>
LinkedList<T>& LinkedList<T>::insertIn(T const& data, int number) {
    if (size == 0) {
        Node<T>* current = addIntoEmptyList(data);
    }
    else if (number >= size) {
        Node<T>* current = addIntoTail(data);
    }
    else if (number <= 0) {
        Node<T>* current = addIntoHead(data);
    }
    else {
        Node<T>* afterElem = head;
        Node<T>* beforeElem = head;
        for (int i = 0; i < number; i++) {
            afterElem = afterElem->next;
        }
        beforeElem = afterElem->prev;
        Node<T>* current = new Node<T>(data, afterElem, beforeElem);
        afterElem->prev = current;
        beforeElem->next = current;
        size++;
    }
    return *this;
}

template<class T>
LinkedList<T>& LinkedList<T>::removeElement(int number) {

    if (number < 0 || number > size) {
        return *this;
    }
    if (size == 1) {
        delete tail;
        tail = head = nullptr;
        size--;
        return *this;
    }
    Node<T>* removable;
    if (number == 0) {
        removable = head;
        Node<T>* afterRemovable = head->next;
        afterRemovable->prev = nullptr;
    }
    else if (number == size) {
        removable = tail;
        Node<T>* beforeRemovable = tail->prev;
        beforeRemovable->next = nullptr;
    }
    else {
        removable = head;
        for (int i = 0; i < number; i++) {
            removable = removable->next;
        }
        Node<T>* beforeCurrent = removable->prev;
        Node<T>* afterElem = removable->next;
        beforeCurrent->next = afterElem;
        afterElem->prev = beforeCurrent;
    }
    size--;
    delete removable;
    removable = nullptr;
    return *this;
}

template<class T>
LinkedList<T>& LinkedList<T>::popfront() {
    if(size == 0) {
        return *this;
    }

    if (size == 1) {
        delete tail;
        tail = head = nullptr;
        size--;
        return *this;
    }

    Node<T>* removable = head;
    Node<T>* afterRemovable = head->next;
    afterRemovable->prev = nullptr;
    head = afterRemovable;
    delete removable;
    removable = nullptr;
    size--;
    return *this;
}

template<class T>
LinkedList<T>& LinkedList<T>::popback() {
    if(size == 0) {
        return *this;
    }

    if (size == 1) {
        delete tail;
        tail = head = nullptr;
        size--;
        return *this;
    }

    Node<T>* removable = tail;
    Node<T>* beforeRemovable = tail->prev;
    beforeRemovable->next = nullptr;
    tail = beforeRemovable;
    delete removable;
    removable = nullptr;
    size--;
    return *this;
}

template<class T>
void LinkedList<T>::printList() {
    if(size == 0) {
        return;
    }
    Node<T>* node = head;
    for (int i = 0; i < size; i++) {
        std::cout << node->data << std::endl;
        node = node->next;
    }
}

template<class T>
T& LinkedList<T>::getElement(int num) {
    if(num > size || num < 0) {
        throw "getElement: you have tried to get access to unexisted element";
    }
    Node<T>* returnableNode = head;
    for (int i = 0; i < num; i++) {
        returnableNode = returnableNode->next;
    }
    return returnableNode->data;
}


//////////////////////////////////////////////////
/*		private functions						*/
//////////////////////////////////////////////////

template<class T>
Node<T>* LinkedList<T>::addIntoEmptyList(T const& data) {
    Node<T>* newNode = new Node<T>(data, nullptr, nullptr);
    head = newNode;
    tail = newNode;
    size++;
    return newNode;
}

template<class T>
Node<T>* LinkedList<T>::addIntoTail(T const& data) {
    Node<T>* current = new Node<T>(data, nullptr, tail);
    tail->next = current;
    tail = current;
    size++;
    return current;
}

template<class T>
Node<T>* LinkedList<T>::addIntoHead(T const& data) {

    Node<T>* current = new Node<T>(data, head, nullptr);
    head->prev = current;
    head = current;
    size++;
    return current;
}
