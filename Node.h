#ifndef NODE_H
#define NODE_H

template<class T>
	struct Node {
	T* data;
	Node* next;
	Node* prev;
	Node(Node& next = nullptr, Node& prev = nullptr, T& data = nullptr);
	~Node();
};

#endif // !NODE_H