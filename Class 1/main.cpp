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

// Topics: validation, for, while, srtStream, break & continue
//int main(){
//
//    int input;
//
//    while (true){
//        cout << "Enter 1 or 2: ";
//        cin >> input;
//        if (input>= 1 && input <= 2)
//            break; // exits
//        cin.clear();
//        cin.ignore(1000, '\n'); // discargs up to a 1000 chars or until it hits a new line
//        cout << "Ya basic! I said enter 1 or 2: \n" << endl;
//
//    }
//}

int main(){

    while(true)
    {
        bool bRejected = false;
        string fullName;
        cout << "Enter Full Name:";
        getline(cin, fullName);

        if (fullName.length() == 0){ //is empty

            bRejected = true;
        }

        for(int i = 0; i<fullName.length() && !bRejected; i++){

            if (isalpha(fullName[i])){
                continue;
            }
            if (fullName[i] == ' '){
                continue;
            }
            bRejected = true;
        }

        if(!bRejected){
            cout << "Input valid" << endl;
            break;
        }
        else{
            cout << "Input invalid" << endl;
            _getch();
        }
    }
}