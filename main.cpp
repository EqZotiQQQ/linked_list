#include <iostream>
#include "linkedList.h"
#include "node.h"
#include "linkedList.cpp"
#include "node.cpp"
using namespace std;
int main(int argc, char** argv) {
	LinkedList<int> ll;
	ll.pushback(0);
	ll.printList();
	ll.pushback(1).pushback(2);
	ll.printList();
	return 0;
}