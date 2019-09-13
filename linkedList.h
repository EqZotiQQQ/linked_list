#ifndef LINKEDLIST_H
#define LINKEDLIST_H



//namespace linekdList {

	template<class T>
	struct Node {
		T* data;
		Node* next;
		Node* prev;
		Node(Node& next = nullptr, Node& prev = nullptr, T& data = nullptr) {
			this->next = next;
			this->prev = prev;
			this->data = data;
		}
	};


	template<class T>
	class LinkedList {
	private:
		int numberOfElements;
		Node<T>* first;
		Node<T>* last;
	public:
		LinkedList()
			: numberOfElements(0)
		{
			first = last = nullptr;
		}
		unsigned int getNumber();
		void addElement(const T& data);
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


