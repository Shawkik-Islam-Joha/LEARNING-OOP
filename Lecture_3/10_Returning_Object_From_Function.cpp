#include <iostream>

using namespace std;

class student{
public:
    string id;
    float cgpa;
public:
    student(string x="220xxxx",float y=0.00){
        id = x,cgpa = y;
    }
}s1("2202124",3.70);
// Function returning student data type
student test(){
    student temp;   // object is created to return
    string p;
    cin >> p;
    temp.id = p;
    return temp;
}

int main(){
    student s2;
    s2 = test();
    cout << "Student Id = " << s2.id << " CGPA = " << s2.cgpa << endl;
    return 0;
}