#include <iostream>

using namespace std;

void modify(int *x) {                                // Function receives the variable location via argument
    *x = 100;                                        // Changes the original variable via location
    cout << "Inside function: x = " << *x << endl;   //Print the changed value inside the function
}

void modify2(int &x){                                // Function receives the variable location via argument
    x = 120;                                         // Changes the original variable via location
    cout << "Inside function: x = " << x << endl;
}

int main() {
    int a = 50;
    cout << "Before function call: a = " << a << endl;
    modify(&a);                                              // Call by reference (location of a is passed)
    cout << "After function call: a = " << a << endl;       // 'a' got changed
    cout << "____________________________________________" << endl;
    modify2(a);
    cout << "After function2 call: a = " << a << endl;
    return 0;
}