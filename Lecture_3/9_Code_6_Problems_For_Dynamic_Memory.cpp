#include <iostream>
#include <cstdlib>

using namespace std;

class myClass{
    int *p;
public:
    myClass(int x){
        p = (int*)malloc(sizeof(int));
        if(!p){
            cout << "Allocation failed.." << endl;
            exit(true);
        }
        *p = x;
    }
    ~myClass(){
        free(p);
        cout << "Freeing Memory..." << endl;
    }
    int get(){
        return *p;
    }
};

int negative(myClass obj){
    return -obj.get(); 
}

int main(){
    myClass n1(45);
    cout << n1.get()  << endl;
    cout << negative(n1) << endl;
    cout << n1.get() << endl;
    
    return 0;
}

/*
code will show garbage value as the negative function will call destructor and clear
the dynamically alocated memory.
*/