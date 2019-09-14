#include <iostream>
#include "linkedList.h"
#include "node.h"
#include "linkedList.cpp"
#include "node.cpp"
using namespace std;
int main(int argc, char** argv) {
	LinkedList<int> ll;
	ll.pushback(21).pushback(23);
	ll.pushfront(20);
	ll.insertIn(15, 1);
	ll.insertIn(15, 1);
	ll.insertIn(15, 1);
	cout << ll.getNumber() << endl;
	ll.removeElement(1);
	cout << ll.getNumber() << endl;
	return 0;
}