#include <iostream>

using namespace std;

int main() {
    int num1 = 1, num2 = 2;

    int *p1 = &num1;

    cout << *p1;

    return 0;
}