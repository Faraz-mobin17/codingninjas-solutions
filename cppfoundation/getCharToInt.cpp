#include <iostream>
using namespace std;
/*
* how to get char 1 to integer 1 
*/
int main(int argc, char const *argv[])
{
    // * how to get char 1 to integer 1 
    char ch = '1';
    int getInt = ch - '0';
    cout << getInt << endl;
    // to get character corresponding to that integer 
    char getChar = 'a' + getInt - 1;
    cout << getChar << endl;
    return 0;
}