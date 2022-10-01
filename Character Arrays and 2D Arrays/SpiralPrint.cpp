#include <iostream>
using namespace std;

void spiralPrint(int **input, int nRows, int nCols)
{
    //Write your code here
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = nRows - 1;
    int endingCols = nCols - 1;
    int total = nRows * nCols;
    for (int index = 0; index < total; ++index) {

        for (int index = startingCol; index <= endingCols; ++index) {
            cout << input[startingRow][index] << " ";
        }
        ++startingRow;
        for (int index = startingRow; index <= endingRow; ++index) {
            cout << input[index][endingRow] << " ";
        }
        --endingCols;
        for (int index = endingCols; index >= startingCol; --index) {
            cout << input[endingRow][index] << " ";
        }
        --endingRow;
        for (int index = endingRow; index >= startingRow; --index) {
            cout << input[index][startingCol] << " ";
        }
        --startingCol;
    }    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}