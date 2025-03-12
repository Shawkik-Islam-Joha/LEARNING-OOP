#include <iostream>

using namespace std;

class Base1{
    int a;
public:
    Base1(int x){ 
        cout << "Constructing Base1\n"; 
        a = x; 
    }
    ~Base1(){ 
        cout << "Destructing Base1\n"; 
    }
    int geta(){ 
        return a; 
    }
};

// Inherit direct base class
class Derived1 : public Base1{
    int b;
public:
    Derived1(int x, int y) : Base1(y){ 
        cout << "Constructing Derived1\n"; 
        b = x; 
    }
    ~Derived1(){ 
        cout << "Destructing Derived1\n"; 
    }
    int getb(){ 
        return b; 
    }
};

// Inherit a derived class and an indirect base
class Derived2 : public Derived1{
    int c;
public:
    Derived2(int x, int y, int z) : Derived1(y, z){ 
        cout << "Constructing Derived2\n"; 
        c = x; 
    }
    ~Derived2(){ 
        cout << "Destructing Derived2\n"; 
    }
    void show(){ 
        cout << geta() << ' ' << getb() << ' ' << c << '\n'; 
    }
};

int main(){
    Derived2 obj(1, 2, 3);
    obj.show();
    cout << obj.geta() << ' ' << obj.getb() << '\n';
    return 0;
}