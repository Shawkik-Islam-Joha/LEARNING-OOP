#include <iostream>

using namespace std;

class base{
protected:    // private to base
    int a, b; // but still accessible by derived
public:
    void setab(int n, int m){ 
        a = n, b = m; 
    }
};

class derived : protected base{ // inherit as protected
    int c;
public:
    void setc(int n){ 
        c = n; 
    }
    // void setab(int n,int m){
    //     a = n,b = m;
    // }
    // this function has access to a and b from base
    void showabc(){ 
        cout << a << ' ' << b << ' ' << c << '\n'; 
    }
};

int main(){
    derived ob;
    // ob.setab(1, 2);    // setab() is not accessible here
    ob.setc(3);
    ob.showabc();
    return 0;
}