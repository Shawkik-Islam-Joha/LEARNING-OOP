#include <iostream>
using namespace std;

class student {
    float cgpa;
public:
    student(float n){
        cgpa = n;
    }
    // Friend function declaration
    friend void display(student s);
};

// Friend function definition
void display(student s){
    cout << "Student CGPA : " << s.cgpa << endl;  // Accessing private data (wsing dot notation!)
}

int main() {
    student s1(3.56);
    display(s1);  // Calling friend function
    return 0;
}
