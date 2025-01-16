#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    cout << a << " = " << ((a&1)?"odd":"even") << endl;
    return 0;
}