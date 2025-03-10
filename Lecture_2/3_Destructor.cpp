#include <iostream>

using namespace std;

//Constructor is a function included in class which is called each time an object of that class is created.

class student{
    string name,id;
public:
    student(string x="Unknown",string y = "2202xxx"){   //Constructor function can take arguments with default values too.
        name = x,id = y;
    }
    //Destructor function don't take any arguments.It works after executing all member functions and destroys last one's first.
    ~student(){
        cout << "Destroying Name : " << name << "\n" << "ID: " << id << endl;
    }
    //Member function
    string get_student(){
        cout << "Name : " << name << "\n" << "ID: " << id << endl;
    }
    // Line 14 AKA destructor will start executing from here,for each objects created(Here,3 times)
};

int main(){
    student s1("JOHA","2202124"),s2("XYZ","2202126"),s3;
    s1.get_student();
    s2.get_student();
    s3.get_student();
    return 0;
}