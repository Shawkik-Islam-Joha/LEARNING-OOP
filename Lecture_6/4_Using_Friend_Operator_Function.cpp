#include <iostream>

using namespace std;

// Define a class to represent a distance in meters
class Distance{
private:
    double meters;

public:
    // Default constructor: initializes meters to 0
    Distance(){meters = 0;}
    
    // Parameterized constructor: initializes meters with given value
    Distance(double m){meters = m;}
    
    // Member function to display the distance
    void display(){
        cout << "Distance: " << meters << " meters" << endl;
    }

    // Declare friend functions for operator overloading
    friend Distance operator+(const Distance& d1, const Distance& d2);
    friend Distance operator+(const Distance& d, int m);
    friend Distance operator+(int m, const Distance& d);
};

// Overload the + operator to add two Distance objects
Distance operator+(const Distance& d1, const Distance& d2){
    // Create a temporary Distance object with the sum of meters
    Distance temp(d1.meters + d2.meters);
    // Return the resulting Distance
    return temp;
}

// Overload the + operator to add an integer to a Distance
Distance operator+(const Distance& d, int m){
    // Create a temporary Distance object with meters plus the integer
    Distance temp(d.meters + m);
    // Return the resulting Distance
    return temp;
}

// Overload the + operator to add a Distance to an integer
Distance operator+(int m, const Distance& d){
    // Reuse the other + operator for commutativity
    return d + m;
}

// Main function to test friend operator overloading
int main(){
    Distance d1(10.5);
    Distance d2(7.3);

    cout << "Distance 1: ";
    d1.display();
    cout << "Distance 2: ";
    d2.display();

    // Test adding two Distance objects
    Distance d3 = d1 + d2; // Calls friend operator+: 10.5 + 7.3 = 17.8
    cout << "d1 + d2: ";
    d3.display();

    // Test adding Distance and integer
    Distance d4 = d1 + 5;
    cout << "d1 + 5: ";
    d4.display();

    // Test adding integer and Distance
    Distance d5 = 5 + d1; // Calls friend operator+: 5 + 10.5 = 15.5
    cout << "5 + d1: ";
    d5.display();

    return 0;
}