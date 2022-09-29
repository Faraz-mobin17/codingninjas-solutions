#include <iostream>
#include <cstring>
using namespace std;

void replaceCharacter(char input[], char c1, char c2) {
    // Write your code here
    int i = 0, j = 0;
    while (input[i] != '\0') 
    {
        if (input[j] == c1)
            input[j] = c2;
        i++;
        j++;
    }
}

int main() {
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}