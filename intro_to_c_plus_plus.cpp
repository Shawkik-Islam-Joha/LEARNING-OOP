#include <iostream>

#define newl "\n"

using namespace std;

int counter = 100; //Declaring Global variable

int main(){
    int counter = 5;
    cout << "Value of local variable (counter) is: " << counter << endl; //access the local variable
    cout << "Value of global variable (counter) is: " << ::counter << endl; //access the global variable
    cout << "Hi Joha!" << newl << "How you doin?" << newl;
    return 0;
}