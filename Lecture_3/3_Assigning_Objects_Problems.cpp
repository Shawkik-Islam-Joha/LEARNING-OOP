#include <iostream>
#include <cstdlib>

using namespace std;

class learn{
    int *a; // declared pointer variable
public:
    learn(int x){
        a = (int*)malloc(sizeof(int));
        // malloc dynamically creates a space of size 4 in memory and return that adress as void pointer,then we cast it to int pointer.
        if(!a){
            cout << "Memory Allocatioon failure!" << endl;
            exit(true); // terminates program
        }
        *a = x;
    }
    ~learn(){
        free(a);
        cout << "Freeing memory" << endl;
    }
    int get(){
        return *a;
    }    
};

int main(){
    int y = 120;
    int *p; // Declaring an integer pointer;
    p = &y;
    cout << p << endl;  // prints the memory location
    cout << *p << endl; // prints the value stored in that location

    learn l1(10),l2(50);
    cout << l1.get() << endl;
    cout << l2.get() << endl;
    l1 = l2;    // both l1 and l2 will point to the same memory
    // both objects call their destructors, leading to double free (free(p)) on the same memory location.
    // The program will likely to crash due to the double free error.
    cout << l1.get() << endl;
    cout << l2.get() << endl;
    return 0;
}