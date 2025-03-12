#include <iostream>

using namespace std;

class base{
    int x;
public:
    void setx(int n){ 
        x = n; 
    }
    void showx(){ 
        cout << x << '\n'; 
    }  
};

// Inherit as private
class derived : private base{
    int y;
public:
    void sety(int n){ 
        y = n; 
    }
    void showy(){ 
        cout << y << '\n'; 
    }
};

int main(){
    derived obj;
    base base_obj;
    base_obj.setx(1);
    base_obj.showx();
//    obj.setx(15);    // access member of base class(ERROR will happen)
    obj.sety(25);    // access member of derived class
//    obj.showx();     // access member of base class(ERROR will happen)
    obj.showy();     // access member of derived class
    return 0;
}