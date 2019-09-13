#include <iostream>
#include "linkedList.h"
#include "Node.h"
using namespace std;
int main(int argc, char**argv) {
	LinkedList<int> ll;
	cout << ll.getNumber() << endl;
	ll.addElement(5);
	//cout << ll.getNumber() << endl;
	return 0;
}