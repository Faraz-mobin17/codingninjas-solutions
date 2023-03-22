#include <iostream>
#include "Car.h"
#include "HondaCity.h"
using namespace std;

int main(int argc, char const *argv[])
{
    // Vehicle v;
    // v.color = "Blue";
    // v.maxSpeed = 100; error because declared private
    // v.numTypres = 100; can't access declared protected
    // Car c(50);
    // c.color = "Black";
    // // c.numTypres = 4; // declared protected can't access
    // c.numGeras = 5;
    HondaCity h(4, 5);
    return 0;
}