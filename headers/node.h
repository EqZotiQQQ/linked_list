#include <iostream>

#ifndef NODE_H
#define NODE_H

template<class T>
struct Node {
    T data;
    Node* next;
    Node* prev;

    Node(T const& data, Node* next = nullptr, Node* prev = nullptr);
    ~Node();
};

#endif // !NODE_H
