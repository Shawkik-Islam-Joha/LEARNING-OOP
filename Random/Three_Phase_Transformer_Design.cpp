#include <iostream>
#include <cmath>
using namespace std;

// Transformer constants
#define S 145e3       // Apparent power of the transformer
#define f 50          // Frequency
#define V1 11000      // Per phase voltage of HV side
#define V2 239.6003617 // Per phase voltage of LV side
#define Et 5.49       // Voltage per turns
#define T1 2104       // HV maximum winding number
#define T2 44         // LV winding number
#define I1 4.3939     // HV side current
#define I2 202        // LV side current
#define a1 1.8        // Area of the HV conductor
#define a2 80.8       // Area of the LV conductor
#define d 151         // Diameter of the core
#define d1 151        // Core dimension
#define dhv 1.5       // Diameter of the HV conductor
#define Alv 43.6745   // Area of the copper strips with 0.25mm paper insulation of LV

int main() {
    float width, height, windowarea;
    cout << "Enter the approximate area of the window: ";
    cin >> windowarea;
    cout << "Enter the width of the window: ";
    cin >> width;
    height = windowarea / width;
    cout << "The height of the window: " << height << endl;
    cout << "Enter the approximate height of the window: ";
    cin >> height;
    height += 34;
    cout << "The adjusted height: " << height << endl;
    cout << "The window area (Aw): " << width * height << endl;

    float D = width + 0.95 * d1;
    cout << "D = " << D << endl;
    cout << "Enter the approximate value of D: ";
    cin >> D;
    float H = height + 2 * 0.95 * d1;
    cout << "The distance between the center of adjacent limbs, D: " << D << endl;
    cout << "The total width: 2 * " << D << " + 0.95 * " << d1 << " = " << 2 * D + 0.95 * d1 << endl;
    cout << "Total height: " << height << " + 2 * 0.95 * " << d1 << " = " << H << endl;

    int Layeroflv, Layerofhv;
    cout << "\nFor LV side winding:" << endl;
    cout << "Enter the number of LV layers: ";
    cin >> Layeroflv;
    float turnsperlayeroflv = T2 / static_cast<float>(Layeroflv);
    cout << "Turns per layer of LV coil: " << turnsperlayeroflv << endl;
    cout << "Enter the approximate turns per layer: ";
    cin >> turnsperlayeroflv;

    float heightofwindinglv = 7.73 * turnsperlayeroflv;
    float thicknessofwindingoflv = 22.6;
    float distancebetweencoilandlv = 3.5;
    float insidethediameterofthecoillv = d + 2 * 3.5;
    float outsidethediameterofthecoillv = insidethediameterofthecoillv + 2 * thicknessofwindingoflv;
    float meandiameterofcoiloflv = insidethediameterofthecoillv + thicknessofwindingoflv;
    float meanlengthlv = 3.1416 * meandiameterofcoiloflv;
    cout << "Turns per layer of LV: " << turnsperlayeroflv << endl;
    cout << "Height of the LV winding: 5 * " << turnsperlayeroflv << " = " << heightofwindinglv << endl;
    cout << "Thickness of the LV winding: 22.6 * " << Layeroflv << " = " << thicknessofwindingoflv << endl;
    cout << "Distance between the core and LV: " << distancebetweencoilandlv << endl;
    cout << "Inside diameter of LV coil: " << d << " + 2 * 3.5 = " << insidethediameterofthecoillv << endl;
    cout << "Outside diameter of LV coil: " << insidethediameterofthecoillv << " + 2 * " << thicknessofwindingoflv << " = " << outsidethediameterofthecoillv << endl;
    cout << "Mean diameter of LV coil: " << insidethediameterofthecoillv << " + " << thicknessofwindingoflv << " = " << meandiameterofcoiloflv << endl;
    cout << "Mean length of turn of LV coil: " << meanlengthlv << endl;

    // HV coil calculations
    cout << "\nCalculation for the HV coil:" << endl;
    float distancebetweenLVandHV = 12;
    cout << "The distance between LV and HV: 12mm" << endl;
    float insidethediameterofhvcoil = distancebetweenLVandHV * 2 + outsidethediameterofthecoillv;
    cout << "Inside diameter of HV coil: " << outsidethediameterofthecoillv << " + 2 * 12 = " << insidethediameterofhvcoil << endl;
    float numberofturnspersplit = T1 / 4.0;
    cout << "The number of turns per split: " << numberofturnspersplit << endl;
    cout << "Enter the approximate turns per coil: ";
    cin >> numberofturnspersplit;
    cout << "Enter the number of HV winding layers: ";
    cin >> Layerofhv;
    float turnsperlayerofhv = numberofturnspersplit / Layerofhv;
    cout << "Turns per HV coil layer: " << turnsperlayerofhv << endl;
    cout << "Enter the approximate turns per layer: ";
    cin >> turnsperlayerofhv;
    cout << "The diameter with paper insulation: 1.75" << endl;
    float theheightofthewinding = 1.75 * turnsperlayerofhv;
    cout << "The height of the HV winding: 1.75 * " << turnsperlayerofhv << " = " << theheightofthewinding << endl;
    float thicknessofeachcoil = dhv * Layerofhv;
    cout << "The thickness of each HV coil: " << Layerofhv << " * " << dhv << " = " << thicknessofeachcoil << endl;
    float outsidethediameterofhvcoil = insidethediameterofhvcoil + 2 * thicknessofeachcoil;
    cout << "Outside diameter of each HV coil: " << insidethediameterofhvcoil << " + 2 * " << thicknessofeachcoil << " = " << outsidethediameterofhvcoil << endl;
    float meandiameter = insidethediameterofhvcoil + thicknessofeachcoil;
    cout << "Mean diameter: " << meandiameter << endl;
    float meanlength = 3.1416 * meandiameter;
    cout << "The mean length of HV coil: " << meanlength << endl;
    float theheightofHvcoils = 4 * theheightofthewinding + 8 + 8 + 8;
    cout << "The height of HV coils: 4 * " << theheightofthewinding << " + 8 * 3 = " << theheightofHvcoils << endl;
    cout << "The space required between coils and core on either side is taken as 26 mm" << endl;
    cout << "The height of the window required: 26 * 2 + " << theheightofHvcoils << " = " << 52 + theheightofHvcoils << endl;

    if (theheightofHvcoils >= height || 52 + theheightofHvcoils > height) {
        cout << "ERROR! There is not enough height in the window" << endl;
        return 0;
    }

    // Percentage reactance calculation
    cout << "\nCalculation of the percentage reactance:" << endl;
    cout << "LV mean length: " << meanlengthlv << endl;
    cout << "HV mean length: " << meanlength << endl;
    float averagemeanlength = (meanlengthlv + meanlength) / 2;
    cout << "The average mean length: " << averagemeanlength << endl;
    float AT = T2 * I2;
    cout << "The ampere turns: " << AT << endl;
    float meanheigthofthecoil = (theheightofHvcoils + heightofwindinglv) / 2;
    cout << "The mean height of the coil: " << meanheigthofthecoil << endl;
    int a = 12; // Distance between LV and HV
    float b2 = thicknessofwindingoflv;
    float b1 = thicknessofeachcoil;
    cout << "a = " << a << "\nb1 = " << b1 << "\nb2 = " << b2 << endl;
    float Reactance = (2 * 3.1416 * 3.1416 * f * 4e-7 * averagemeanlength * AT) / (meanheigthofthecoil * Et) * (a + (b1 + b2) / 3) / 10;
    cout << "The Percentage of Reactance: " << Reactance << endl;

    // Resistance calculation
    cout << "\nCalculation for the resistance:" << endl;
    float p75 = 0.021;
    float R2 = (p75 * T2 * meanlengthlv) / (a2 * 1000);
    cout << "The resistance of the LV winding, R2: " << R2 << endl;
    float R1 = (p75 * meanlength * T1) / (a1 * 1000);
    cout << "The resistance of the HV winding, R1: " << R1 << endl;
    float ratio = static_cast<float>(V1) / V2;
    cout << "The ratio: " << ratio << endl;
    float R = R1 + R2 * ratio * ratio;
    cout << "The resistance referred to high side: " << R << endl;
    float percentageofresistance = (R * I1) / V1 * 100;
    cout << "The Percentage of Resistance: " << percentageofresistance << endl;
    float percentanceofimpedance = sqrt(percentageofresistance * percentageofresistance + Reactance * Reactance);
    cout << "The Percentage of Impedance per phase: " << percentanceofimpedance << endl;

    return 0;
}