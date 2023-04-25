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
   if (input.empty()) {
        output[0] = "";
        return 1;
   }
    int smallOutput = getCodes(input.substr(1),output);
    int smallOutputTwo = getCodes(input.substr(2),output);
    
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
