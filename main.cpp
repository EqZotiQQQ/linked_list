#include <iostream>
#include "linked_list.h"
#include "node.h"
#include "linked_list.cpp"
#include "node.cpp"
using namespace std;
int main(int argc, char** argv) {
    LinkedList<int> ll;
    ll.pushback(0);
    ll.printList();
    cout << endl;
    ll.pushback(1).pushback(2);
    ll.printList();
    cout << endl;
    ll.pushfront(3);
    ll.printList();
    cout << endl;
    ll.popback();
    ll.printList();
    cout << endl;
    ll.popfront();
    ll.printList();
    cout << endl;
    try {
       // ll.getElement(33);
    } catch (exception e) {
        e.what();
    }
    return 0;
}
