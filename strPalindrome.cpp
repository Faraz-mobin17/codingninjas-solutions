#include <iostream>
#include <cstring>
using namespace std;

int length(char* str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i += 1)
        ++count;
    return count;
}

bool checkPalindrome(char* str) {
    int len = length(str);
    int start = 0, end = len - 1;
    char duplicateStr = str;
    while (start < end) {
        int temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    if (duplicateStr == str)
        return true;
    return false;
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
    return 0;
}
