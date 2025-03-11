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

class book{
public:
    int price;
public:
    book(int x=150){
        price = x;
    }
};

int main(){
    student eee[5]={student("2202124",3.75),student("2202126",3.8),student("2202164",3.8)};
    //Generated an array of objects of class student and initialised them.
    for(int i=0;i<5;i++){
    //Running loop to access data from objects.
        cout << "Student Id - " << eee[i].id << " CGPA - " << eee[i].cgpa << endl;
    }

    cout << "_________________________________" << endl;
    
    book bb[10] = {10,300,450,500};
    //book bb[10] = {book(10),book(300),book(450)};
    
    for(int i=0;i<10;i++){
        //Running loop to access data from objects.
            cout << "Book - " << i+1 << " Price - " << bb[i].price << endl;
    }
    return 0;
}

/*
Objects are similar to variable. Hence, declaring and accessing array of objects 
are similar to usual array.
*/