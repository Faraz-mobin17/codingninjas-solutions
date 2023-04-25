#include <iostream>
#include <string>

using namespace std;
string getString(int digit) 
{
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

void helperKeypadCode(int num, string str) {
    if (num == 0) {
        cout << str << endl;
        return;
    }
    int lastDigit = num % 10;
    int smallNumber = num / 10;
    string options = getString(lastDigit);
    for (int i = 0; i < options.size(); ++i) {
        helperKeypadCode(smallNumber,options[i] + str);
    }
}

void printKeypad(int num) 
{
   helperKeypadCode(num,"");
}

int main()
{
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
