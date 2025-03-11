#include <iostream>  

using namespace std;

int main() {
    string *s;  //Declare an string pointer

    s = new string; //allocate a memory for a string

    if(!s){
        //Allocation fail check
        cout << "Allocation Failure..." << endl;
        exit(true);
    }
    //If not failed,then -
    *s = "SHAWKIK ISLAM JOHA";
    cout << "Here is a string at allocated memory - " << *s << endl;
    delete s;       //Release allocated memory

    return 0;
}
