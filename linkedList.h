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
	public:
		LinkedList();
		unsigned int getNumber();
		void addElement(T& data);
		/*bool removeElement(int number);

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


