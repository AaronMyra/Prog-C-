#include <iostream>
#include <conio.h>
using namespace std;

//int main() {
//
//    // prototype
//    void addTen(int *p, int); // Use pointer notation when passing an array
//    void addTwenty(int a[], int); //Using array notation
//
//    int a[]= {1,2,3};
//    int *p = a; // Make pointer point to array
////    p = a;
//
//
//
//    for (int i=0; i < 3 ; i++)
//    {
//
////        cout << a[i] << endl;
//            cout << p[i] << endl;
//
//    }
//
//    addTen(p, 3);
//
//    for (int i=0; i < 3 ; i++)
//    {
//
////        cout << a[i] << endl;
//        cout << p[i] << endl;
//
//    }
//    return 0;
//}
//
//// Implmentation of addTen method
//void addTen(int *p, int size) // Pass using pointer notation
//{
//
//    for (int i=0; i < size ; i++)
//    {
//
//        p[i] += 10;
//
//    }
//}
//
//void addTwenty(int a[], int size) // Pass using array notation
//{
//
//    for (int i=0; i <= size ; i++)
//    {
//
//        a[i] += 10;
//
//    }
//}

int main(){// Passing 2D array

    int my2D[][3] = {{0,100,200},{1,300,400},{2,500,600}};
    int rows = 3;
    int cols = 3;

    int *pInt;
    *pInt = my2D;

    for (int row=0; row < 3; row++ ){

        for (int col=0; col<3; col++){

            cout << my2D[row][col];
            if (col != 2){ cout << ", ";}

        }

        cout << endl;
    }



    for (int row=0; row < 3; row++ ){

        for (int col=0; col<3; col++){

            cout << my2D[row][col];
            if (col != 2){ cout << ", ";}

        }

        cout << endl;
    }
} // End Main

void name(int *p, int size){

}