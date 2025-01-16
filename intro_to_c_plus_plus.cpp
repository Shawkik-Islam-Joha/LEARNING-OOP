#include <iostream>

#define newl "\n"
// compiler will replace newl with "\n"       

using namespace std;

int counter = 100; //Declaring Global variable

int main(){
    int counter = 5;
    cout << "Value of local variable (counter) is: " << counter << endl; //access the local variable
    cout << "Value of global variable (counter) is: " << ::counter << endl; //access the global variable
    cout << "Hi Joha!" << newl << "How you doin?" << newl;
    for(int i=0;i<100;i++)cout << i << newl;
    int x;
    cin >> x;
    if(x&1)cout << "Odd" << newl;
    else cout << "Even" << newl;
    return 0;
}