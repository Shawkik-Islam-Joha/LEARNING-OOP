#include <iostream>

using namespace std;

// Constructor is a function included in class which is called each time an object of that class is created.

class student{
    string name,id;
public:
    student(string x="Unknown",string y = "2202xxx"){   // Constructor function can take arguments with default values too.
        name = x,id = y;
    }
    string get_student(){
        cout << "Name : " << name << "\n" << "ID: " << id << endl;
    }
};

int main(){
    student s1("JOHA","2202124"),s2("XYZ","2202126"),s3; // s3 will get default values set in student()
    s1.get_student();
    s2.get_student();
    s3.get_student();
    return 0;
}