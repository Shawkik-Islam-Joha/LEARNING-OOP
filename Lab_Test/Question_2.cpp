#include <iostream>

using namespace std;

class triangle{
    float base,height;
public:
    triangle(int x,int y){
        base = x,height = y;
    }
    float get_area(){
        return 0.5*base*height;
    }
};

int main(){
    triangle t[3] = {triangle(10.0,20.0),triangle(5.0,10.0),triangle(10.0,10.0)};
    int n=0;
    float max_area=0;
    for(int i=0;i<3;i++){
        if(t[i].get_area()>max_area){
            n=i+1;
            max_area = t[i].get_area();
        }
    }
    cout << "Triangle " << n << " has the largest area" << endl;
    return 0;
}