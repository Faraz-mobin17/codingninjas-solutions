#include <iostream>
#include<cstring>
using namespace std;

int length(char input[]) {
    int count = 0;
    for (int i = 0; input[i] != '\0'; i += 1) 
        ++count;
    return count;
}
void reverseWord(char input[], int i , int j) {
    while (i < j) {
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
    }
}

int main(){
    char input[100];
    cin.getline(input,100);
    int n = strlen(input);
    int len = length(input);
    cout << "value of N is: " << n << endl;
    cout << "value of len is :" << len << endl;
    return 0;
}
