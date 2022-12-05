#include <iostream>
#include "Pair.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
    Pair<int> p1;
    p1.setX(10);
    p1.setY(20);

    cout << p1.getX() << endl;
    cout << p1.getY() << endl;

    Pair<double> p2;
    p2.setX(10.22);
    p2.setY(20.22);

    cout << p2.getX() << endl;
    cout << p2.getY() << endl;

    Pair<char> p3;
    p3.setX('x');
    p3.setY('y');

    cout << p3.getX() << endl;
    cout << p3.getY() << endl;
    return 0;
}