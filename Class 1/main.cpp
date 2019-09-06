#include <iostream> //cout, endl ect.
#include <string> // More primitive that a java string object - uses lower case "s"
#include <sstream>  //
#include <ctime> // Time and random routine
#include <conio.h> // _getch() ie. get character
using namespace std; // eliminates need for std


//int main() {
//    cout << "Hello, World!" << endl;
//    string fname;
//    string lname;
//    cout << "Please enter your first name:"; //<< endl; endl = end line used for line break or \n
//    getline(cin, fname);
//    cout << "Please enter your last name:";
//    getline(cin, lname);
//    cout << " Hello " << fname << " " << lname;
//    _getch();
//
//    return 0;
//}

//int main (){
//    string myString;
//    float price = 0;
//    int quantity = 0;
//    cout << "Enter price: ";
//    getline(cin, myString);
//    stringstream(myString) >> price; // stringstream auto converts type
//
//    cout << "Enter quantity: ";
//    getline(cin, myString);
//    stringstream(myString) >> quantity;
//
//    cout << "Total Cost: " << price * quantity << endl;
//
//}

int main (){
   srand(time(0)); //provides a seed value that changes
   for (int i = 0; i < 100; i++)
   {
        //cout << i + 1 << " " << rand() << endl; // not scaled
        cout << i + 1 << " " << rand() %10 << endl; // scaled ie. range

   }

}