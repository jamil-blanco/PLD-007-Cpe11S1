#include <iostream>
#include <cmath> 
using namespace std;

// Computation for area
double computeSurfaceArea(double side)
{
    return pow(side, 3); 
}

int main()
{
    double side;
    cout << "Enter the side of the cube: ";
    cin >> side;

    cout << "The surface area of the cube is: " << computeSurfaceArea(side) << endl;

    return 0;
}
