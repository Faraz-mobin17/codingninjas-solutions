#include<bits/stdc++.h>
using namespace std;



int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
   int n;
    cin >> n;
    int currentTerm = 0;
    int nextTerm = 1;
    int nextFibo;
    for (int i = 1; i <= n; i += 1) {
        nextFibo = currentTerm + nextTerm;
        currentTerm = nextTerm;
        nextTerm = nextFibo;
    }
    cout << currentTerm;
}