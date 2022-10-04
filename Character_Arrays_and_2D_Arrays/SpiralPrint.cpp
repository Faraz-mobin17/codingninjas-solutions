#include <iostream>
using namespace std;

void spiralPrint(int **input, int nRows, int nCols)
{
    //Write your code here
    int startingRow = 0, startingCol = 0, count = 0;
    int endingRow = nRows - 1, endingCol = nCols - 1;
    int total = nRows * nCols;
    
      while (count < total) {
            for (int index = startingCol; count < total && index <= endingCol; ++index) {
                cout << input[startingRow][index] << " ";
                ++count;
            }
            startingRow++;
            // print ending col
            for (int index = startingRow; count < total && index <= endingRow; ++index) {
                cout << input[index][endingCol] << " ";
                ++count;
            }
            --endingCol;
            // print ending row
            for (int index = endingCol; count < total && index >= startingCol; --index) {
                cout << input[endingRow][index] << " ";
                ++count;
            }
            --endingRow;
            // print starting Col 
            for (int index = endingRow; count < total && index >= startingRow; --index) {
                cout << input[index][startingCol] << " ";
                ++count;
            }
            ++startingCol;
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
        int **input = new int *[row];

        for (int i = 0; i < row; i++)
        {
            input[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> input[i][j];
            }
        }
        spiralPrint(input, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] input[i];
        }
        delete[] input;

        cout << endl;
    }
}