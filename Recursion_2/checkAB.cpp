#include <iostream>
using namespace std;
/*
* Rules
* Note:
* 1. The string begins with an 'a'
* 2. Each 'a' is followed by nothing or an 'a' or "bb"
* 3. Each "bb" is followed by nothing or an 'a'
*/
bool checkAB(char input[]) {
	// if first char is not a then rule no 1 broked return false
  	if (input[0] != 'a') return false; 
    // if there is only one character then return true according to rule 2
	if (input[0] == 'a' && input[1] == '\0') return true;
    // if a is followed by another a then call recursive function checkAB(input + 1)
	if (input[0] == 'a' && input[1] == 'a') return checkAB(input + 1);
    // if a is followed by bb and bb is followed by a or empty char then return true
	if (input[1] == 'b' && input[2] == 'b' && input[3] == 'a') return true;
	return checkAB(input + 1);
}

int main() {
    char input[100];
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}
