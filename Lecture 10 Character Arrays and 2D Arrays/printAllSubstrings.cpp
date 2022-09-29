#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(char input[]) {
    // Write your code here
   for (int i = 0; input[i] != '\0'; ++i) {
        for (int j = i; input[j] != '\0'; ++j) {
            int start = i, end = j;
            char output[100];
            int x = 0;
            for (int k = start; k <= end; ++k) {
                output[x] = input[k];
                ++x;
            }
            output[x] = '\0';
            cout << output << endl;
        }
    }
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}