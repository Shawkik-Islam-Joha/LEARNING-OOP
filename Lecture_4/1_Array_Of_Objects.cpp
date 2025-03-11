#include <iostream>

using namespace std;

//Declaring and defining class
class student{
public:
    string id;
    float cgpa;
public:
    student(string s="2202xxx",float a=2.00){
        id = s,cgpa = a;
    }
};

int main(){
    student eee[5]={student("2202124",3.75),student("2202126",3.8),student("2202164",3.8)};
    //Generated an array of objects of class student and initialised them.
    for(int i=0;i<5;i++){
    //Running loop to access data from objects.
        cout << "Student Id - " << eee[i].id << " CGPA - " << eee[i].cgpa << endl;
    }
    return 0;
}

/*
Objects are similar to variable. Hence, declaring and accessing array of objects 
are similar to usual array.
*/