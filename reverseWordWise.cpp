#include <bits/stdc++.h>
using namespace std;

int length(char input[]) {
    int count = 0;
    for (int i = 0; input[i] != '\0'; i += 1) 
        ++count;
    return count;
}

void reverseWord(char input[], int i, int j) {
    while (i < j) {
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}

void reverseStringWordWise(char input[]) {
    int len = length(input);
    int i = 0, j = len - 1;
    while (i < j) {
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
    // reverse indivisual words in the string
    int start = 0, end = 0;
    for (i = 0; i < len; i += 1) {
        if (input[i] == ' ') {
            end = i - 1;
            reverseWord(input,start,end);
            start = i + 1;
            end = i + 1;
        }
    }
    end = i - 1;
    reverseWord(input,start,end);
}

int main() {

    char input[1000];
    cin.getline(input,1000);
    reverseStringWordWise(input);
    cout << input << endl;

}
