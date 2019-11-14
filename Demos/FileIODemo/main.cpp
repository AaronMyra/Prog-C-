//Notes: 
//To read input from a file, your program
//must first connect the file to a stream object.

// << this is the insertion operator
// >> this is the extraction operator

// If you create a text file in the same directory as the cpp
// or in CMakeFiles directory in CLion so that the 
// the compiler can find it. If you put it in any other
// way you will need to set the properties of the file
// so that the compiler will be aware of it.

//You must explicitly close files because they will be
//left open if your program terminates abnormally. 
//In addition, you should use exception handling

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//prototypes
void demoOpenCloseStreams();
void demoOpenPrint();
void demoOpenWrite();

int main()
{
    cout << "Begin fileIO Demonstration" << endl;
    cout << "Begin Open Close Streams Demo" << endl;
    demoOpenCloseStreams();
    cout << "Begin Open Print Demo" << endl;
    demoOpenPrint();
    cout << "Begin Open Write Demo" << endl;
    demoOpenWrite();
    cout << "End fileIO Demonstration" << endl;
    return 0;
}

void demoOpenCloseStreams()
{
    cout << "Files Open" << endl;
    //declare stream objects
    ifstream inStream;
    ofstream outStream;
    //connect files to stream objects
    inStream.open("/myFileIn.txt");
    outStream.open("/myFileOut.txt");
    //a shorter version of above
    ifstream inStream2("/myFileIn.txt");
    inStream.close();
    outStream.close();
    inStream2.close();
    cout << "Files Closed" << endl;
}//end method

void demoOpenPrint() //validate open state of a 
//file using fstream.fail()
{
    string line;
    ifstream myFileIn;
    //you may use either the .fail() or
    //the .is_open() method of a file stream object
    //to test if a file is open
    myFileIn.open("myFileIn.txt");

    if (myFileIn.is_open())//or if(myFileIn.fail)
    {
        cout << "File Open" << endl;
        while (!myFileIn.eof())
        {
            getline(myFileIn, line);
            cout << line << endl;
        }
        myFileIn.close();
        cout << "File Closed" << endl;
    }
    else {
        cout << "Input file failed to open" << endl;
    }

}//end method

void demoOpenWrite()
{
    ofstream myFileOut;
    //to append to a file - use ios::app
    myFileOut.open("myFileOut.txt",ios::app);

    if (myFileOut.is_open())//or if(myFileOut.fail)
    {
        myFileOut << "stuff " << "and more stuff" << endl;
        cout << "File Closed" << endl;
    }
    else {
        cout << "Output file failed to open" << endl;
        getchar();
    }
}

