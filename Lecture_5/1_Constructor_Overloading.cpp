#include <iostream>

using namespace std;

class car{
public:
    int weight,speed;
public:
    //No Argument Constructor
    car(){
        weight = 0,speed = 0;
    }
    //Two argument constructor
    car(int a,int b){
        weight = a,speed = b;
    }
};

int main(){
    car unknown;    //No argument constructor is called
    car mazda(1200,450);    //Two argument constructor is called
    cout << "Car 1,\nWeight - " << unknown.weight << " Speed - " << unknown.speed << endl; 
    cout << "Car 2,\nWeight - " << mazda.weight << " Speed - " << mazda.speed << endl; 
    return 0;
}