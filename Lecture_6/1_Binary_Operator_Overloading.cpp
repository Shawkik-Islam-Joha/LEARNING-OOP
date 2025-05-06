#include <iostream> 

using namespace std;

// Define a class to represent a 2D vector with x and y components
class Vector2D{
private:
    int x, y;

public:
    // Default constructor: initializes x and y to 0
    Vector2D(){x = 0; y = 0;}
    
    // Parameterized constructor: initializes x and y with given values
    Vector2D(int xVal, int yVal){x = xVal; y = yVal;}
    
    // Member function to display the vector's components
    void display(){
        cout << "Vector: (" << x << ", " << y << ")" << endl;
    }

    // Overload the + operator as a member function
    // Adds two Vector2D objects and returns a new Vector2D
    Vector2D operator+(const Vector2D& other){
        // Create a temporary Vector2D object for the result
        Vector2D temp;
        // Add x components of the current and other vector
        temp.x = x + other.x;
        // Add y components of the current and other vector
        temp.y = y + other.y;
        // Return the resulting vector
        return temp;
    }

    // Overload the == operator as a member function
    // Checks if two Vector2D objects are equal
    bool operator==(const Vector2D& other){
        // Return true if both x and y components are equal
        return x == other.x && y == other.y;
    }
};

// Main function to test binary operator overloading
int main(){
    Vector2D v1(5, 2);
    Vector2D v2(3, 4);
    Vector2D v3(5, 2);

    cout << "Vector 1: ";
    v1.display();
    cout << "Vector 2: ";
    v2.display();
    cout << "Vector 3: ";
    v3.display();

    // Test the + operator: add v1 and v2
    Vector2D sum = v1 + v2; // Calls operator+: sum = (5+3, 2+4) = (8, 6)
    cout << "v1 + v2: ";
    sum.display();

    // Test the == operator: compare v1 with v2 and v3
    cout << "v1 == v2: " << (v1 == v2 ? "True" : "False") << endl;
    cout << "v1 == v3: " << (v1 == v3 ? "True" : "False") << endl;

    return 0;
}