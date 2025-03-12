#include <iostream>

using namespace std;

class Base{     // Base class
public:
    int publicVar;
private:
    int privateVar;
protected:
    int protectedVar;
public:
    Base(){ 
        publicVar = 1; 
        privateVar = 2; 
        protectedVar = 3; 
    }
};

class Derived : public Base{
public:
    void display(){
        cout << publicVar << endl;     // Accessible (public)
        // cout << privateVar << endl;    // Error: private member not accessible
        cout << protectedVar << endl;  // Accessible (protected)
    }
};

int main(){
    Derived obj;
    obj.display();
    cout << obj.publicVar << endl;     // Accessible (public) as usual
    // cout << obj.privateVar << endl;    // Error: private member not accessible
    // cout << obj.protectedVar << endl;  // Error: protected member not accessible outside the class hierarchy
    return 0;
}