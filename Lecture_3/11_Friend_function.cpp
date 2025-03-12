#include <iostream>
using namespace std;

class student {
    float cgpa;
public:
    student(float n){
        cgpa = n;
    }
    friend void display(student s);               // Friend function declaration
};

// Friend function defining
void display(student s){
    cout << "Student CGPA : " << s.cgpa << endl;  // Accessing private data (using dot notation!)
}

int main() {
    student s1(3.56);
    display(s1);  // Calling friend function
    return 0;
}
