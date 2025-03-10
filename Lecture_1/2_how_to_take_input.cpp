#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;   //cin means console input
    cout << a << " = " << ((a&1)?"odd":"even") << endl; //cout means console output
    return 0;
}