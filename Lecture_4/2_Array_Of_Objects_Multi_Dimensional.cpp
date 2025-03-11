#include <iostream>

using namespace std;

class student{
public:
    string id;
public:
    student(string a="2202xxx"){
        id = a;
    }
};

int main(){
    student eee[180][2] = {student("2202124"),student("2202130")};
    for(int i=0;i<180;i++){
        cout << "Student ID = " << eee[i][0].id << endl;
        cout << "Student ID = " << eee[i][1].id << endl;
    }
    return 0;
}