#include <iostream>
#include "linkedList.h"
#include "Node.h"
#include "linkedList.cpp"
#include "Node.cpp"
using namespace std;
int main(int argc, char**argv) {
	LinkedList<int> ll;
	ll.pushback(21).pushback(23);
	cout << ll.getNumber() << endl;
	return 0;
}