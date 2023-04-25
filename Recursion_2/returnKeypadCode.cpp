#include <iostream>
#include <string>
using namespace std;

string getString(int digit) {
    switch (digit)
    {
    case 2:
        return "abc";
        break;
    case 3:
        return "def";
        break;
    case 4:
        return "ghi";
        break;
    case 5:
        return "jkl";
        break;
    case 6:
        return "mno";
        break;
    case 7:
        return "pqrs";
        break;
    case 8: 
        return "tuv";
        break;
    case 9:
        return "wxyz";
        break;
    default:
        return "";
        break;
    }
}

int keypad(int input, string output[]){
   
    // base case
    if (input == 0) {
        output[0] = "";
        return 1;
    } 
    // call recursion on first two string 
    int lastDigit = input % 10;
    int smallNumber = input / 10;
    int smallOutputSize = keypad(smallNumber, output);
    string options = getString(lastDigit);
    for (int i = 0; i < options.length() -1; ++i) {
        for (int j = 0; j < smallOutputSize; ++j) {
            output[j + (i + 1) * smallOutputSize] = output[j];
        }
    }
    int k = 0;
    for (int i = 0; i < options.length(); ++i) {
        for (int j = 0; j < smallOutputSize; ++j) {
            output[k] = output[k] + options[i];
            k++;
        }
    }
    return (smallOutputSize * options.length());
}

int main(){
    int num;
    cin >> num;
    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
