#include <iostream>

using namespace std;

class Engineering{
protected:
    char institution_code;
protected:
    Engineering(char x){
        institution_code = x;
    }
    char get_instid(){
        return institution_code;
    }
};

class EEE:protected Engineering{
protected:
    int dept_code;
protected:
    EEE(int a,char x):Engineering(x){
        dept_code = a;
    }
    int get_deptid(){
        return dept_code;
    }
};

class Student:protected EEE{
protected:
    int student_id;
public:
    Student(char x,int a,int b):EEE(a,x){
        student_id = b;
    }
    void show(){
        cout << institution_code << " " << dept_code << " " << student_id << endl;
    }
};

int main(){
    Student ob('C',2,2102111);
    ob.show();
    return 0;
}