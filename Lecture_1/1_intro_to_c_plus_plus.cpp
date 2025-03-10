#include <iostream>

#define newl "\n"   // compiler will replace newl with "\n"       

using namespace std;

int counter = 100;  //Declaring Global variable

//Declaring and defining a function to do specific job.

bool isEven(int x){
    return (x&1) ? false:true;  
}

int main(){
    int counter = 5;
    cout << "Value of local variable (counter) is: " << counter << endl;    //access the local variable
    cout << "Value of global variable (counter) is: " << ::counter << endl; //access the global variable by using ::
    cout << "Hi Joha!" << newl << "How you doin?" << newl;
    for(int i=0;i<100;i++)cout << i << newl;
    
    cout << "Starting another Section..." << newl;

    int x;
    cin >> x;
    
    if(isEven(x))cout << "Even" << newl;
    else cout << "Odd" << newl;
    return 0;
}