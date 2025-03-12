#include <iostream>  

using namespace std;

class student{
    string name,id;
public:
    student(string a="X Y Z",string b="2202xxx"){
        name = a, id = b;
    }
    void get_data(){
        cout << "Student Name - " << name << " ID - "  << id << endl;
    }
};

int main() {
    student *p;     // Declared object pointer
    p = new student("SHAWKIK","2202124");    // Allocate object in memory with SHAWKIK and 2202124   
    if(!p){
        // Failure check
        cout << "Allocation Error.." << endl;
        exit(true);
    }
    p->get_data();
    student s1;
    *p = s1;
    p->get_data();
    delete p;   // Release memory

    cout << "__________________________________" << endl;

    int *n;         // Declared integer pointer
    n = new int(100);       // Allocate int in memory with 100
    if(!n){
        // Failure check
        cout << "Allocation Error.." << endl;
        exit(true);
    }
    cout << *n << endl;
    delete n;
    return 0;
}
