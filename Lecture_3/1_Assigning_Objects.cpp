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
}s1("2202124",3.70),s2("2202130",3.91),s3;

int main(){
    cout << "Student 1 Id = "  << s1.id << " CGPA = " << s1.cgpa << endl;
    cout << "Student 2 Id = "  << s2.id << " CGPA = " << s2.cgpa << endl;
    cout << "Student 3 Id = "  << s3.id << " CGPA = " << s3.cgpa << endl;

    s1 = s3;    //Assigniung s3 data to s1,techincally bitwise copy pasting.

    cout << "Student 1 Id = "  << s1.id << " CGPA = " << s1.cgpa << endl;

    return 0;
}