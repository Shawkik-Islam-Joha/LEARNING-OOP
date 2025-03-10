#include <iostream>

#define newl '\n'

using namespace std;

/* Class Declaration syntax-

class class-name {
 //private functions and variables
 public:
 //public functions and variables
} object-list;

Object list is optional.

Define Member Function -

return-type class-name :: function-name(parameter-list) {
        //body of function
}

*/


class driver{
private:        //if we don't define,it's private by default
    string name;
    int age;
public:         //if we don't define,it's private by default
    void set_name(string na);
    void set_age(int ag);
    int get_age();
    string get_name();
}d1;    //creating object

//defining the functions built for the class "driver"

void driver::set_name(string na){
        name = na;
}
void driver::set_age(int ag){
        age = ag;
}
string driver::get_name(){
        return name;
}

int driver::get_age(){
        return age;
}

//one can define the functions inside the class too!

class cars{
public:                     
    string brand;
    string model;
    int top_speed;
    int capacity;

public:                     
        void set_brand(string x){
                brand = x;
        }
        void set_model(string y){
                model = y;
        }
        void set_ts(int a){
                top_speed = a;
        }
        void set_c(int b){
                capacity = b;
        }
};


int main(){
    cars c1;                    //creating object
    c1.set_brand("Ford");       //modifying objects with public functions
    c1.set_model("Mustang");
    c1.set_ts(230);
    c1.set_c(1500);

    d1.set_name("Bottas");
    d1.set_age(41);

    cout << d1.get_name() << " " << d1.get_age() << endl;

    driver d2;

    d2.set_name("Lewis");
    d2.set_age(51);

    cout << d2.get_name() << " " << d2.get_age() << endl;      //access private data via function

    cout << c1.brand << " " << c1.model << " " << c1.top_speed << " " << c1.capacity << endl;   /*It was possible because of public.
    If it was private,we would have to use function to access brand,model etc.*/

    return 0;
}