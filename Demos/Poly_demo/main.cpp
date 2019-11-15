#include <iostream>
#include "Vehicle.h"
#include "Bicycle.h"
#include "Boat.h"

using namespace std;

//Prototypes
void withoutCasting();
void sliceExample();
void upCasting();
void downCasting();
void typeIdExample();
void polyExample();

int main() {

//    withoutCasting();
//    sliceExample();
//    upCasting();
//    downCasting();
//    typeIdExample();
    polyExample();

    return 0;
}
void withoutCasting(){
    Bicycle myBike;
    Boat myBoat;
    cout << myBike.blowHorn() << endl;
    cout << myBoat.blowHorn() << endl;
}
void sliceExample(){
    Bicycle myBike;
//    Vehicle v1 = myBike; // Implicite upcast
    Vehicle v1 = (Vehicle) myBike; // Explicit upcast **Best**
    cout << v1.blowHorn() << endl;
}

// Fix using pointers and dynamic variable
void upCasting(){
    Vehicle *pV; // Only need to declare the pointer var
    Bicycle *pBic = new Bicycle;
    Boat *pBoat = new Boat;

    pV = pBic; // Correct upcast
    cout << pV->blowHorn() << endl;
    cout << pBic->blowHorn() << endl;
    cout << pBoat->blowHorn() << endl;
}
void downCasting(){
    //Primitive Method

    Vehicle *pV = new Boat; // Declared boat on heap and upcasted to vehicle
//    Bicycle *pBic = dynamic_cast<Bicycle*>(pV); // Downcast
//    cout << "PBic = " << (long)pBic << endl; // Null no match

    Boat *pBoat = dynamic_cast<Boat*>(pV);
    cout << "pBoat = " << (long)pBoat << endl;

}
void typeIdExample(){
    Vehicle *pV = new Boat; // Declared boat on heap and upcasted to vehicle
    if (typeid(Bicycle) == typeid(pV)){
        cout << "Match" << endl;
    }
    else{
        cout << "No Match" << endl;
    }



}
void polyExample(){
    Vehicle *pV;
    Bicycle *pBic = new Bicycle;
    Boat *pBoat = new Boat;

    //Vehicle *pVArray[2];
    Vehicle **pVArray = new Vehicle *[2];

    pVArray[0] = (Vehicle*)pBic; //Explicit upcast adding to the array
    pVArray[1] = (Vehicle*)pBoat; //Explicit upcast adding to the array

    for (int i = 0; i < 2; ++i) {
        cout << pVArray[i]->blowHorn() << endl;
    }

}
