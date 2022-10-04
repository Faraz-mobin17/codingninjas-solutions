#include<iostream>
using namespace std;

int main() {
   int m,n;
	cin >> m >> n;
	for (int i = 0; i<m;++i) {
		for (int j = 0; j < n; ++j) {
			cin >> arr[i][j];
		}
	}
    for (int i = 0; i < n;++i) {
        int sum = 0;
        for (int j = 0; j < m; ++j) {

            sum += arr[j][i];
        }
        cout << sum << " ";
    }
    return 0;
}
