#include <iostream>
#include <conio.h>
#include "NumberList.h"

using namespace std;

int main() {

    NumberList list;

    cout << "Begin list test" << endl;
    _getch();

    cout << "Append method" << endl;
    list.appendNode(1.2);
    list.appendNode(3.4);
    list.appendNode(5.6);
    list.displayList();

    cout << "Insert method" << endl;
    list.insertNode(1.0);
    list.insertNode(2.0);
    list.insertNode(4.0);
    list.insertNode(6.0);
    list.displayList();

    cout << "Delete method" << endl;
//    list.deleteNode()


    return 0;
}