#include<iostream>
using namespace std;

int main(){
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i += 1) {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i =0; i < n; i +=1 ) {
        sum += arr[i];
    }
    cout << sum;
}


