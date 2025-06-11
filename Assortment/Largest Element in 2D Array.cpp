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

    int largest = a[0][0]; 

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (a[i][j] > largest)
            {
                largest = a[i][j];
            }
        }
    }

    cout << "The largest element is: " << largest << endl;

    return 0;
}
