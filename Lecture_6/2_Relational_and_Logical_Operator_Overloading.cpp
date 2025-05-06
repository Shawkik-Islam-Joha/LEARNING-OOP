#include <iostream>
 
using namespace std;

// Define a class to represent a rectangle with width and height
class Rectangle{
private:
    double width, height;

public:
    // Default constructor: initializes width and height to 0
    Rectangle(){width = 0; height = 0;}
    
    // Parameterized constructor: initializes width and height with given values
    Rectangle(double w, double h){width = w; height = h;}
    
    // Member function to calculate the area of the rectangle
    double getArea(){
        // Multiply width and height to get area
        return width * height;
    }

    // Member function to display the rectangle's dimensions
    void display(){
        cout << "Rectangle: width = " << width << ", height = " << height << ", area = " << getArea() << endl;
    }

    // Overload the == operator as a member function
    // Checks if two rectangles have the same area
    bool operator==(const Rectangle& other){
        // Return true if areas are equal
//        return getArea() == other.getArea();
    }

    // Overload the < operator as a member function
    // Checks if this rectangle's area is less than another's
    bool operator<(const Rectangle& other){
        // Return true if this rectangle's area is less than the other's
//        return getArea() < other.getArea();
    }
};

// Main function to test relational operator overloading
int main(){
    Rectangle r1(4, 5);
    Rectangle r2(2, 10);
    Rectangle r3(3, 4);

    cout << "Rectangle 1: ";
    r1.display();
    cout << "Rectangle 2: ";
    r2.display();
    cout << "Rectangle 3: ";
    r3.display();

    // Test the == operator: compare areas of r1 and r2
    cout << "r1 == r2: " << (r1 == r2 ? "True" : "False") << endl; // Areas: 4*5 = 20, 2*10 = 20

    // Test the < operator: compare areas of r1 and r3
    cout << "r1 < r3: " << (r1 < r3 ? "True" : "False") << endl; // Areas: 4*5 = 20, 3*4 = 12

    return 0;
}