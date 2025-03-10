#include <iostream>
#include <cstdlib>

using namespace std;

class formulaE;     //forward declaration is needed to make the compiler recognize "formulaE" class in advance for line 14!

class formula1{
    int weight,speed;
public:
    formula1(int a=0,int b=0){
        weight = a,speed = b;
    }
    friend int compare(formula1 a,formulaE b);  //this function is mutual friend to both formula1 and formulaE class
};

class formulaE{
    int weight,speed;
public:
    formulaE(int a=0,int b=0){
        weight = a,speed = b;
    }
    friend int compare(formula1 a,formulaE b);
};

int compare(formula1 a,formulaE b){
    if(a.speed > b.speed)return 1;
    else if(a.speed==b.speed)return 2;
    else return 3;
}

int main(){
    formula1 marcedes(1000,612);
    formulaE tesla(560,512);

    if(compare(marcedes,tesla)==1)cout << "Formula1 is faster than FormulaE" << endl;
    else if(compare(marcedes,tesla)==2)cout << "Formula1 & FormulaE is of equal speed" << endl;
    else cout << "FormulaE is faster than Formula1" << endl;
    return 0;
}