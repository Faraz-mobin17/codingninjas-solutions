#include <iostream>
#include "Pair.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Pair<int, double> p1;
    p1.setX(10);
    p1.setY(20.22);

    cout << p1.getX() << endl;
    cout << p1.getY() << endl;
    return 0;
}