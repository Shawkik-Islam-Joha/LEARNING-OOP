#include <iostream>

using namespace std;

//Constructor is a function included in class which is Called each time an object of that class is created.

class boy{
    int age;
    public:
    boy();  //Constructor function.
    void show();
};

boy::boy(){
    age = 21;
}

void boy::show(){
    cout << age << endl;
}

int main(){
    boy joha;
    joha.show();
    return 0;
}