#include<iostream>
using namespace std;
void printTable(int start, int end, int step) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
   for (int i = start; i <= end; i += step) {
		int celcius = 5 * (i - 32) / 9;
		cout << i << "\t" << celcius << endl;
	}
}



int main(){
    int start, end, step;
    cin >> start >> end >> step;
  
    printTable(start, end, step);

}


