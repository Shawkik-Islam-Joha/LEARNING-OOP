#include <iostream>

using namespace std;

void modi(int *p){      //taking pointer as argument
    *p = 1000;
}

void modify(int &p){    //taking ref location as argument
    p = 2000;
}

int main(){
    int j = 100;
    modi(&j);
    cout << j << endl;
    modify(j);
    cout << j << endl;
    return 0;
}

//permanent change of data at the specified location