#include <iostream>
#include <conio.h>
#include "myOwnMath.h"

using namespace std;

int main() {
    int ans1, ans2, ans3, input;
    myOwnMath ownMath;
    cout << "Enter and int 1-9: " << endl;
    cin >> input;

    ans1 = ownMath.add(input);
    ans2 = ownMath.square(input);

    cout << "Your number squared is: " << ans2 << endl;
    cout << "Your number added to itself is: " << ans1 << endl;
    return 0;
}