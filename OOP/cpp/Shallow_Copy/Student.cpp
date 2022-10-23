#include <iostream>
#include <cstring>
using namespace std;
#include "Student.h"
int main(int argc, char const *argv[])
{
    char name[] = "abcd";
    Student s1(10, name);
    s1.display();
    Student s2(s1);
    s2.name[0] = 'x';
    s1.display();
    s2.display();
    // name[3] = 'e';
    // Student s2(24, name);
    // s2.display();
    // s1.display();
    return 0;
}