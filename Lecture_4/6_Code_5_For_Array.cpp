#include <iostream>  

using namespace std;

int main() {
    int *p;
    p = new int[5]{1,2,3,4,5}; // Allocated memory for an array of 5 element and initialised

    for(int i=0;i<5;i++){
        cout << p[i] << endl;
    }
    delete []p;

    return 0;
}
