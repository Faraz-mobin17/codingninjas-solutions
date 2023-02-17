#include <iostream>
#include <string.h>
using namespace std;

int getCodes(string input, string output[10000]) {
    /*
    You are given the input text and output string array. 
    Find all possible codes and store in the output string array. 
    Don’t print the codes.
    Also, return the number of codes return to the output string. 
    You do not need to print anything.
    */

}


int main(){
    string input;
    cin >> input;

    string output[10000];
    int count = getCodes(input, output);
    for(int i = 0; i < count && i < 10000; i++)
        cout << output[i] << endl;
    return 0;
}
