#include <iostream> 

using namespace std;

// Define a class to represent a complex number with real and imaginary parts
class Complex{
private:
    double real, imag;

public:
    // Default constructor: initializes real and imag to 0
    Complex(){real = 0; imag = 0;}
    
    // Parameterized constructor: initializes real and imag with given values
    Complex(double r, double i){real = r; imag = i;}
    
    // Member function to input real and imaginary parts
    void input(){
        // Prompt user and read real and imaginary parts
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    // Overload the + operator as a member function
    // Adds two Complex numbers
    Complex operator+(const Complex& other){
        // Create a temporary Complex object with summed real and imaginary parts
        Complex temp(real + other.real, imag + other.imag);
        // Return the resulting Complex number
        return temp;
    }

    // Member function to display the complex number
    void display(){
        // Check if imaginary part is negative
        if (imag < 0)
            cout << "Complex number: " << real << imag << "i" << endl;
        else
            cout << "Complex number: " << real << "+" << imag << "i" << endl;
    }
};

// Main function to test complex number addition
int main(){
    Complex c1, c2, result;

    cout << "Enter first complex number:\n";
    c1.input();
    cout << "Enter second complex number:\n";
    c2.input();

    // Test the + operator: add c1 and c2
    result = c1 + c2; // Calls operator+: adds real and imaginary parts

    cout << "Result: ";
    result.display();

    return 0;
}