#include <iostream>

using namespace std;

class Vehicle {
protected:
    string type;
    int wheels;
public:
    Vehicle(string t, int w) {
        type = t;
        wheels = w;
    }
    void displayVehicle() {
        cout << "Vehicle Type: " << type << ", Wheels: " << wheels << endl;
    }
};

class Car : public Vehicle {
protected:
    string brand;
    int year;
public:
    Car(string b, int y, string t, int w) : Vehicle(t, w) {
        brand = b;
        year = y;
    }
    void displayCar() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

class Toyota : public Car {
private:
    string model;
public:
    Toyota(string m, string b, int y, string t, int w) : Car(b, y, t, w) {
        model = m;
    }
    void display() {
        displayVehicle(); 
        displayCar(); 
        cout << "Model: " << model << endl;
    }
};

int main() {
    Toyota ob("Corolla", "Toyota", 2022, "Sedan", 4);
    ob.display();

    return 0;
}
