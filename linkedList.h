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
	bool removeElement(int number);
	void printList();

	/*TODO
	template<class T>
	bool removeElement(T& data);

	template<class T>
	T& getElement(int num);

	template<class T>
	int getElemNumber(T& data);
	~LinkedList();*/
};

//} //namespace LinkedList



#endif // !LINKEDLIST_H


