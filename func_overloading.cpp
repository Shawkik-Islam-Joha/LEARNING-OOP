#include <iostream>

using namespace std;

bool isEven(int x){
    return ((x&1) ? false:true);
}

int multiply(int x,int y){
    return (x*y);
}

int multiply(int x,int y,int z){
    return (x*y*z);
}

//function multiply() is overloaded.
//Overloaded functions differ in the data types of their arguments and number of arguments.

int main(){
    cout << multiply(5,4,6) << endl; //second one will be called
    cout << multiply(2,3) << endl; //first one will be called
    return 0;
}