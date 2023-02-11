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


void printKeypad(int num) {
    if (num == 0) {
        return;
    }
    int lastDigit = num % 10;
    string outputStringFirst = getString(num);
    string outputStringSecond = getString(lastDigit);
    cout << outputStringFirst << outputStringSecond << endl;
    printKeypad(num /= 10);
}

int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
