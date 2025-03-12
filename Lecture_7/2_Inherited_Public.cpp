#include <iostream>

using namespace std;

class base{
    int x;
public:
    void setx(int n){ 
        x = n; 
    }
    void showx(){ 
        cout << x << endl; 
    }
};

// Inherit as public
class derived : public base{
    int y;
public:
    void sety(int n){ 
        y = n; 
    }
    void showy(){ 
        cout << y << endl; 
    }
};

int main(){
    derived obj;
    obj.setx(45);    // access member of base class
    obj.sety(78);    // access member of derived class
    obj.showx();     // access member of base class
    obj.showy();     // access member of derived class
    return 0;
}