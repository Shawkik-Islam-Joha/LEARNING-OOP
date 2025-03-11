#include <iostream>

using namespace std;

class apple;

/*
A forward declaration of class apple as it'll be mentioned
in class samsung and it'll be defined later.
*/

class samsung{
    string model;
public:
    samsung(string s){
        model = s;
    }
    void showa(apple &obj);     //A function that will access apple's data
};

class apple{
private:
    string model;
public:
    apple(string s){
        model = s;
    }
    friend void samsung::showa(apple &obj);     
    /*Declaration of friend of a function of samsung that'll be
    able to access apple's private data.
    */
};

//Defining the friend function.
void samsung::showa(apple &obj){
    cout << "Model Name - " << obj.model << endl;
}

int main(){
    samsung s1("S24 Ultra");
    apple a1("iPhone 16");
    s1.showa(a1);   //samsung's function accessing apple's data
    return 0;
}
