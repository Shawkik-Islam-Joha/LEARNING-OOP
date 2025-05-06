#include <iostream> 

using namespace std;

// Function that returns an integer (r-value)
int getNumber(){
    // Return a temporary value
    return 42;
}

// Main function to demonstrate l-values and r-values
int main(){
    int x, y;

    // Assign an r-value (literal 5) to an l-value (x)
    x = 5;
    cout << "x = " << x << endl;

    // Assign an l-value (x) to another l-value (y)
    y = x;
    cout << "y = " << y << endl;

    // Use an r-value from a function
    int z = getNumber(); // getNumber() returns an r-value
    cout << "z = " << z << endl;

    // Demonstrate that literals are r-values
    // 5 = x; // Error: 5 is an r-value, cannot be on left side

    // Demonstrate that function return values are r-values
    // getNumber() = 10; // Error: getNumber() returns an r-value

    // Modify an l-value
    x = x + 1; // x is an l-value, can be modified
    cout << "x after increment: " << x << endl;

    return 0;
}