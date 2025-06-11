#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the array's size: ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "Negative elements from an Array: ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            cout << arr[i];
            if (i != size - 1)
                cout << ", ";
        }
    }

    return 0;
}
