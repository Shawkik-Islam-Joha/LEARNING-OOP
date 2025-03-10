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

float sqcgpa(student *obj){          //recieving object's memory location
    return obj->cgpa*obj->cgpa;      //square the data on that location
}

float sqcgpa2(student &obj){         //This way works too!Accepting reference/memory location   
    return obj.cgpa*obj.cgpa;
}

int main(){
    cout << "Before passing the reference,Student 1 CGPA = " << s1.cgpa << endl;
    cout << "Alfter passing the reference,Student 1 CGPA = " << sqcgpa(&s1) << endl;   //changes the s1.cgpa in main too!
    cout << "_____________________________________________________________" << endl;
    cout << "Alfter passing the reference,Student 1 CGPA = " << sqcgpa2(s2) << endl;
    return 0;
}