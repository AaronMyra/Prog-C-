#include <iostream>

using namespace std;

// Dsclare Class
class Cat{

private:
    int itsAge;
public:
    Cat(){itsAge = 7;}; // no parameter list means default
    ~Cat(){cout << "Deleted Cat" << endl;}//Default destructor -- dont cout in deconstructor

    int getAge() const{ return itsAge;}
    void setAge(int age){itsAge = age;}
};

int main() {

    Cat *pCharlie = new Cat; // No parenthesis -- declared in dynamic mem (heap/free store)
    Cat Zoro = Cat(); // Declare an object --  declared in stack (local)

    cout << Zoro.getAge() << endl; // Access non heap class
    cout << (*pCharlie).getAge() << endl;
    cout << pCharlie->getAge() << endl; // Access a class on heap - same as above

    // -> operator is short for deref then get property

    //This is required to delete object from the heap
    // Object on stack deleted automatically
    delete pCharlie; //Deconstructing charlie

    //pCharlie = nullptr; // Does not delete objects only reassign pointer variable

    return 0;
}

//Heap & Property Access
// you may use the dot opperator to access properties of object created locally. To access object declared on the