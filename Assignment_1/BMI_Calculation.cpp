#include <iostream>

using namespace std;

class BMI{
private:
    float weight1, weight2, height1, height2;
public:
    void inputData(){
        cout << "Enter weight (kg) and height (m) of first sibling: ";
        cin >> weight1 >> height1;
        cout << "Enter weight (kg) and height (m) of second sibling: ";
        cin >> weight2 >> height2;
    }
    void compareBMI(){
        float bmi1 = weight1 / (height1 * height1);
        float bmi2 = weight2 / (height2 * height2);

        cout << "First sibling's BMI: " << bmi1 << endl;
        cout << "Second sibling's BMI: " << bmi2 << endl;

        if(bmi1 > bmi2)cout << "First sibling has a higher BMI." << endl;
        else if(bmi2 > bmi1)cout << "Second sibling has a higher BMI." << endl;
        else cout << "Both siblings have the same BMI." << endl;
    }
};

int main(){
    BMI obj; 
    for (int i = 1; i <= 4; i++) {
        cout << "Taking data inputs for Group " << i << ":" << endl;
        obj.inputData();
        obj.compareBMI();
    }
    return 0;
}
