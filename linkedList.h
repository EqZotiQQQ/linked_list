#include <iostream>
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

//namespace linekdList {
#include "Node.h"

template<class T>
class LinkedList {
private:
	int size;
	Node<T>* head;
	Node<T>* tail;
private:
	Node<T>* addIntoEmptyList(T const& data);
	Node<T>* addIntoTail(T const& data);
	Node<T>* addIntoHead(T const& data);
public:
	LinkedList();
	unsigned int getNumber();
	LinkedList<T>& pushback(T const& data);
	LinkedList<T>& pushfront(T const& data);
	LinkedList<T>& insertIn(T const& data, int number);
	LinkedList<T>& removeElement(int number);
	void printList();
	LinkedList<T>& popfront();
	LinkedList<T>& popback();
	T& getElement(int num);
	~LinkedList();
	/*TODO
	probable need to create checks for == nullptr of head/tail
	add isIn
	insertIn and removeElement should search from two sides,
	to increase speed of access to elements.
	add notIsIn
	add operator[]
	probably should be added instruments to use it like array
	*/
};

//} //namespace LinkedList



#endif // !LINKEDLIST_H


