#include<iostream>

using namespace std;

int x;

int &func(){
    return x;               // returns a reference to the global variable x
}

int main (){
   func() = 100;           // assign 100 to reference returned by func()
   cout << x << "\n";
   return 0;
}

