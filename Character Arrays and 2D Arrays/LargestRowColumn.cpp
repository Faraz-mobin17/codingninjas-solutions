#include <iostream>
#include<climits>
using namespace std;

void findLargest(int **input,int nRows, int mCols) {
    int max_row_sum = INT_MIN, max_col_sum = INT_MIN;
    int max_col_sum_idx = 0, max_row_sum_idx = 0;

    for (int i = 0; i < nRows; ++i) {
        int row_sum = 0;
        for (int j = 0; j < mCols; ++j) {
            row_sum += input[i][j];
        }
        if (row_sum > max_row_sum) {
            max_row_sum = row_sum;
            max_row_sum_idx = i;
        }
    }
    for (int j = 0; j < mCols; ++j) {
        int col_sum = 0;
        for (int i = 0; i < nRows; ++i) {
            col_sum += input[i][j];
        }
        if (col_sum > max_col_sum) {
            max_col_sum = col_sum;
            max_col_sum_idx = j;
        }
    }
    if (max_col_sum > max_row_sum) {
        cout << "column" << " " << max_col_sum_idx << " " << max_col_sum;
    } else  {
        cout << "row" << " " << max_row_sum_idx << " " << max_row_sum;
    } 
}


int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--) {
        int row,col;
        cin >> row >> col;
        int **input = new int *[row];
        for (int i = 0; i < row; i++) {
            input[i] = new int[col];
            for (int j = 0; j < col; j++) {
                cin >> input[i][j];
            }
        }
        findLargest(input,row,col);
        cout << endl;
    }   
    return 0;
}