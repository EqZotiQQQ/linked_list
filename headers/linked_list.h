#include <iostream>
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

//namespace linekdList {
#include "node.h"

template<class T>
class LinkedList {
protected:
    int size;
    Node<T>* head;
    Node<T>* tail;
protected:
    Node<T>* addIntoEmptyList(T const& data);
    Node<T>* addIntoTail(T const& data);
    Node<T>* addIntoHead(T const& data);
public:
    LinkedList();
    virtual unsigned int getNumber();
    virtual LinkedList<T>& pushback(T const& data);
    virtual LinkedList<T>& pushfront(T const& data);
    virtual LinkedList<T>& insertIn(T const& data, int number);
    virtual LinkedList<T>& removeElement(int number);
    virtual void printList();
    virtual LinkedList<T>& popfront();
    virtual LinkedList<T>& popback();
    virtual T& getElement(int num);
    virtual ~LinkedList();
    /*TODO

    add mechanism which will not allow to remove elements
    when list already clear
    
    probable need to create checks for == nullptr of head/tail
    add isIn
    
    insertIn and removeElement should search from two sides,
    to increase speed of access to elements.
    
    add notIn
    
    add operator[]
    
    probably should be added instruments to use it like array
    */
};

//} //namespace LinkedList



#endif // !LINKEDLIST_H


