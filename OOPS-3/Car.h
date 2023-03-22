#include "Vehicle.h"
using namespace std;
class Car : public Vehicle
{
public:
    int numGeras;
    Car(int x, int y) : Vehicle(x)
    {
        cout << "Car's params Constrcutor called " << endl;
        numGeras = y;
    }
    ~Car()
    {
        cout << "Car's Destructor called " << endl;
    }
    void print()
    {
        cout << "Num types: " << numTypres << endl;
        cout << "Colors: " << color << endl;
        cout << "Num Gears: " << numGeras << endl;
        // cout << "Max speed: " << maxSpeed << endl; can't access private properties
    }
};