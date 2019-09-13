#include <iostream>
#include "linkedList.h"
using namespace std;
int main(int argc, char**argv) {
	LinkedList<int> ll;
	cout << ll.getNumber() << endl;
	ll.addElement(1);
	//cout << ll.getNumber() << endl;
	return 0;
}