#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    // C = [(°F-32)×5]/9
  	int s,e,w;
    cin >> s >> e >> w;
    int c;
    for (int i = s; i <= e; i += w) {
        c = ((i - 32) * 5) / 9;
        cout << i << " " << c << endl;
    }
}


