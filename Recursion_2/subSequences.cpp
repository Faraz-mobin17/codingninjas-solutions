#include <iostream>
#include <math.h>
using namespace std;
// input string abc
int subs(string input, string output[]) {
    // base case
    if (input.empty()) {
        output[0] = "";
        return 1;
    }
    // call recursion on bc
    string smallString = input.substr(1);
    int smallOutputSize = subs(smallString,output);
    /*
        now the small output we have is 
        ""
        b
        c
        bc
        now we need to append a in every output
    */
   for (int i = 0; i < smallOutputSize; ++i) {
        output[i + smallOutputSize] = input[0] + output[i];
   }
   return (2 * smallOutputSize);
}
int main(int argc, char const *argv[])
{
    string input;
    cin >> input;
    int len = input.length();
    string* output = new string[1000];
    int count = subs(input,output);
    for (int i = 0; i < count; ++i) {
        cout << output[i] << endl;
    }
    return 0;
}