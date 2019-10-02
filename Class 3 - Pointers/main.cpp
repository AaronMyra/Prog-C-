#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

// Epic Poem
int main() {

    //Pointer terminology
    // Use * to declare a pointer
    // Also use * to dereferences
    // Use & as the address operator
    // Use -> as the 'points to' operator

//    string phrase1 = "I woz here.";
//    string phrase2 = " Here I woz.";
//    string phrase3 = " Woz I here?";
//    string phrase4 = " Yes, I woz!";
//
//    //regular use of variable names
//    cout << phrase1 + phrase2 + phrase3 + phrase4 << endl;
//
//    // Cant deref a non pointer
//    //cout << *phrase1 << endl;
//
//    //Declare pointer using declarative operator
//    string *p1;
//    string *p2;
//    string *p3;
//
//    p1 = &phrase1; // Assigning a value to a pointer
//    p2 = &phrase2;
//    p3 = &phrase3;
//
//    string *p4 = &phrase4; // Declare and assign in one statement
//
//    cout << p1 << endl; // Address of the value inside pointer (if no value random address)
//    cout << *p1 << endl; // Deref value of the pointer (value of what it is pointed to)
//    cout << &p1 << endl; // Address of the pointer

    string *pTest; // Declare pointer without value
    //cout << *pTest;
    pTest = nullptr;
    cout << pTest << endl;

    //Nameless variables (dynamic variable)
//    int *pNameless; // Declare int pointer
//    pNameless = new int; // Pointer to a dynamic var (aka nameless)
//    *pNameless = 3; // Assign a value to the int location in memory
//    cout << * pNameless << endl;
//
//    int *pNameless2 = new int(7);
//    cout << *pNameless2;


    return 0;
}// end main