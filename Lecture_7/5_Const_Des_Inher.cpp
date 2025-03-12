#include <iostream>

using namespace std;

class base{
    int i;
public:
    base(int m){ 
        cout << "Constructing base class \n"; 
        i = m; 
    }
    ~base(){ 
        cout << "Destructing base class \n"; 
    }
    void showi(){ 
        cout << i << endl; 
    }
};

class derived : public base{
    int j;
public:
    derived(int n, int m) : base(m){ 
        cout << "Constructing derived class \n"; 
        j = n; 
    }
    ~derived(){ 
        cout << "Destructing derived class \n"; 
    }
    void showj(){ 
        cout << j << endl; 
    }
};

int main(){
    derived o(10, 20);
    o.showi();
    o.showj();
    return 0;
}

/*
In case of constructor, constructor of base class is executed 
first, then the constructor of derived class comes into         
execution.

For destructor, the flow is reversed. That means, destructor
of derived is executed first, then base class’s destructor       
executes.

Expected Output:

Constructing base class 
Constructing derived class 
20
10
Destructing derived class 
Destructing base class 

*/