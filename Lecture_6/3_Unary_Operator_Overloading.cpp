#include <iostream> 

using namespace std;

// Define a class to represent a counter with a single value
class Counter{
private:
    int value;

public:
    // Default constructor: initializes value to 0
    Counter(){value = 0;}
    
    // Parameterized constructor: initializes value with given number
    Counter(int val){value = val;}
    
    // Member function to display the counter's value
    void display(){
        cout << "Counter value: " << value << endl;
    }

    // Overload the ++ operator (prefix) as a member function
    // Increments the counter's value by 1
    Counter& operator++(){
        // Increment the value by 1
        value++;
        // Return the current object to allow chaining
        return *this;
    }

    // Overload the - operator (negation) as a member function
    // Negates the counter's value
    Counter operator-(){
        // Create a temporary Counter with negated value
        Counter temp(-value);
        // Return the negated counter
        return temp;
    }
};

// Main function to test unary operator overloading
int main(){
    Counter c1(5);
    Counter c2(-3);

    cout << "Initial c1: ";
    c1.display();
    cout << "Initial c2: ";
    c2.display();

    // Test the ++ operator: increment c1
    ++c1; // Calls operator++: value becomes 6
    cout << "After ++c1: ";
    c1.display();

    // Test the - operator: negate c2
    Counter c3 = -c2; // Calls operator-: value becomes 3
    cout << "After -c2 (stored in c3): ";
    c3.display();

    // Test chaining with ++
    ++(++c1); // Calls operator++ twice: value becomes 8
    cout << "After ++(++c1): ";
    c1.display();

    return 0;
}