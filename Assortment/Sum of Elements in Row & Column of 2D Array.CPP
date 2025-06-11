#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the array's row size: ";
    cin >> rows;
    cout << "Enter the array's column size: ";
    cin >> cols;

    int a[rows][cols];

    cout << "Enter array's elements:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    int rowNum;
    cout << "Enter row number: ";
    cin >> rowNum;

    int rowSum = 0;
    cout << "Elements of row " << rowNum << ": ";
    for (int j = 0; j < cols; j++)
    {
        cout << a[rowNum][j];
        if (j < cols - 1)
            cout << ", ";
        rowSum += a[rowNum][j];
    }
    cout << "\nThe sum of row " << rowNum << ": " << rowSum << endl;
    int colNum;
    cout << "Enter column number: ";
    cin >> colNum;

    int colSum = 0;
    cout << "Elements of column " << colNum << ": ";
    for (int i = 0; i < rows; i++)
    {
        cout << a[i][colNum];
        if (i < rows - 1)
            cout << ", ";
        colSum += a[i][colNum];
    }
    cout << "\nThe sum of column " << colNum << ": " << colSum << endl;

    return 0;
}
