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
}s1("2202124",3.70),s2("2202130",3.91);

float sqcgpa(student obj){              //passing object into function as "student" data type
    return obj.cgpa*obj.cgpa;       //square the data collected from object
}

int main(){
    cout << sqcgpa(s1) << endl;
    cout << sqcgpa(s2) << endl;
    cout << s1.cgpa << endl;        //s1.cgpa is unchanged in main()
    return 0;
}