#include <iostream>
#include "linkedList.h"
#include "node.h"
#include "linkedList.cpp"
#include "node.cpp"
using namespace std;
int main(int argc, char** argv) {
	LinkedList<int> ll;
	ll.pushback(21).pushback(10);
	ll.insertIn(15, 1);
	ll.printList();
	ll.removeElement(1);
	ll.printList();
	return 0;
}