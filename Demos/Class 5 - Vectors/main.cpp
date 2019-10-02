// Topic:  "Dynamic" arrays, const modifier
// Note: dynamic means declared on the heap - not size changing

#include <iostream>
#include <string>
#include <conio.h>
#include <vector>

using namespace std;

//int main() {
//
//    //Bad
//    int size = 3;
//    int myArray[size]; // error- should use a const for size
//
//    //Better
//    int myArray0[10]; //fixed size
//
//    const int size1 = 10;
//    int myArray2[size1];
//
//    int anArray[3];
//    anArray[0] = 66;
//
//    for (int i = 0; i < 3; i++){
//        cout << anArray[i] << endl;
//    }
//
//    anArray[12] = 42; // Why no error?
//
//    for (int i = 0; i < 3; i++){
//        cout << anArray[i] << endl;
//    }
//
//    return 0;
//}

//int main() {
//
//    const int max = 5;
//    int nonD[max];
//    int c = 0;
//
//    cout << "Enter an integer: ";
//
//    while(cin >> nonD[c]) // If it reads then returns true
//    {
//
//        c++;
//        if (c<5)
//        {
//            cout << c << " elements used" << " max is: " << max << endl;
//        }
//
//        else {
//            cout << "At max - next will exceed array size" << endl;
//        }
//
//        cout << "Enter an integer: ";
//    } // Notice it will happily exceed the array bounds
//
//    return 0;
//}

//

int main(){

    vector<float> v;
    v.assign(10,2.22); // Has 2 parameters -  first: size second: filler

    cout << "size is: " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i) {

        cout << v[i] << ", ";
    }

    vector<float>::iterator iter;
    for (iter = v.begin(); iter != v.end() ; iter++){
        cout << *iter << endl;
    }

    return 0;
}