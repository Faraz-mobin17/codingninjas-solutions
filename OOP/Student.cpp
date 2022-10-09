#include <iostream>
using namespace std;
#include "Student.h"
int main(int argc, char const *argv[])
{
    Student s1(10, 1001);
    Student s2(20, 2001);
    Student *s3 = new Student(30, 3001);
    s2 = s1;  // s1 values into s2
    *s3 = s1; // derefer value and copy s1 into s3
    delete s3;
    Student s4(*s3);
    Student s5 = s4; // copy constructor is called
    /*
    Student s1(10, 1001);
    cout << "S1: ";
    s1.display();

    Student s2(s1);
    cout << "S2: " << endl;
    s2.display();
    // dynamically creating objects
    Student *s3 = new Student(20, 2001);
    cout << "S3: " << endl;
    s3->display();
    // copying s3 into s4, s4 is a static creation
    Student s4(*s3);
    // copying s3 into s5 both are dynamically created
    Student *s5 = new Student(*s3);
    // copying s1 which is static
    Student *s6 = new Student(s1);
    */

    return 0;
}