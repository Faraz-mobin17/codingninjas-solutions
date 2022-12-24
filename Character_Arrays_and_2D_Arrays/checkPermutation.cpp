#include <iostream>
#include <cstring>
#define NO_OF_CHARS 256
using namespace std;


bool isPermutation(char input1[], char input2[]) {
    // Write your code here
 if (strlen(input1) != strlen(input2)) {
        return false;
    }
    int arr[NO_OF_CHARS] = {0};
    int arr2[NO_OF_CHARS] = {0};

    for(int i = 0; input1[i] != '\0' && input2[i] != '\0'; ++i) {
        arr[input1[i]]++;
        arr2[input2[i]]++;
    }

    for (int i = 0; i < NO_OF_CHARS; ++i) {
        if (arr[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}
bool isPermutation2(char input1[], char input2[]) 
{
    if (strlen(input1) != strlen(input2)) {
        return false;
    }
    int freqArr[NO_OF_CHARS] = {0};
    for (int i = 0; i < input1[i] != '\0'; i++)
    {
        /* code */
        ++freqArr[input1[i]];
    }
 for (int i = 0; i < input2[i] != '\0'; i++)
    {
        /* code */
        --freqArr[input1[i]];
    }
    for (int i = 0; i < NO_OF_CHARS; ++i) {
        if (freqArr[i] != 0) {
            return false;
        }
    }
    return true;
    
}
int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}