#include <iostream>

using namespace std;

class student{
public:
    string id,name;
public:
    student(string a="2202xxx",string b = " X Y Z"){
        id = a,name = b;
    }
};

int main(){
    student eee[180] = {student("2202124","SHAWKIK")};
    student *n = eee; //object pointer p getting the starting address aka eee[0],it'll look at eee[0] right now!
    for(int i = 0;i < 180;i++){
        cout << "Student ID - " << n->id << "| NAME - " << n->name << endl;
        n++;    //taking pointer to next location
    }
    return 0;
}