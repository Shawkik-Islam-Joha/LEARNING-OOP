#include <iostream>

#define newl '\n'

using namespace std;

class driver{
private:
    string name;
    int age;
public:
    void set_name(string na);
    void set_age(int ag);
    string get_name();
};

void driver::set_name(string na){
        name = na;
}
void driver::set_age(int ag){
        age = ag;
}
string driver::get_name(){
        return name;
}

class cars{
public:                     //it's private by default and private to cars
    string brand;
    string model;
    int top_speed;
    int capacity;

public:                     //it's private by default and private to cars
    void set_brand(string x);
    void set_model(string y);
    void set_ts(int a);
    void set_c(int b);
};

//defining the functions built for the class cars
//the syntax is -

void cars::set_brand(string x){
        brand = x;
}
void cars::set_model(string y){
        model = y;
}
void cars::set_ts(int a){
        top_speed = a;
}
void cars::set_c(int b){
        capacity = b;
}

int main(){
    cars c1;
    c1.set_brand("Ford");
    c1.set_model("Mustang");
    c1.set_ts(230);
    c1.set_c(1500);

    driver dd;
    dd.set_name("Lewis");

    cout << dd.get_name() << endl;      //access private data

    cout << c1.brand << " " << c1.model << " " << c1.top_speed << " " << c1.capacity << endl;   /*It was possible because of public.
    If it was private,we would have to use function to access brand,model etc.*/

    return 0;
}