#include <iostream>
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

//namespace linekdList {
#include "Node.h"

template<class T>
class LinkedList {
private:
	int numberOfElements;
	Node<T>* first;
	Node<T>* last;
private:
	Node<T>* addIntoClearList(T const& data);
	Node<T>* addLastElement(T const& data);
	Node<T>* addFirstBegin(T const& data);
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
	add destructor
	add isIn
	add notIsIn
	add operator[]
	probably should be added instruments to use it like array
	*/
};

//} //namespace LinkedList



#endif // !LINKEDLIST_H


