#include <iostream>

using namespace std;

void modify(int x) {                                // Function receives a copy of the argument
    x = 100;                                        // Changes only the copy, not the original variable
    cout << "Inside function: x = " << x << endl;   //Print the changed value inside the function
}

int main() {
    int a = 50;
    cout << "Before function call: a = " << a << endl;
    modify(a);                                              // Call by value (a copy of 'a' is passed)
    cout << "After function call: a = " << a << endl;       // 'a' remains unchanged
    return 0;
}