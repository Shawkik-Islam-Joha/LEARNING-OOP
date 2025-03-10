#include <iostream>

using namespace std;

class student{
public:
    string id;
    float cgpa;
public:
    student(string x="220xxxx",float y=0.00){
        id = x,cgpa = y;
        cout << "Constructing..." << endl;
    }
    ~student(){
        cout << "Destructing..." << endl;
    }
}s1("2202124",3.70);

//New object created in the function does not call constructor, but destructor is called.

float sqcgpa(student obj){          //recieving object's memory location
    return obj.cgpa*obj.cgpa;      //square the data on that location
}

int main(){
    cout << "Squared CGPA of Student 1 is = " << sqcgpa(s1) << endl;
    return 0;
}

/*
1. s1 will be constructyed as usual
2. s1 will be passed to func,no constructor call
3. function work done,destructor is called for that obj in that func
4. destructor called as usual
*/

/*
Output will be like:
Constructing...
Squared CGPA of Student 1 is = 13.69
Destructing...
Destructing...
*/