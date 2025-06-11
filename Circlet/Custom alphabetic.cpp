#include <iostream>
using namespace std;

int main()
{
    int rows = 5;

    for (int i = 1; i <= rows; i++)
    {
        if (i == 1 || i == 3)
        {

            for (int j = 1; j <= 5; j++)
            {
                cout << "* ";
            }
        }
        else if (i == 2)
        {
            cout << "* ";
            for (int j = 1; j <= 3; j++)
            {
                cout << "  ";
            }
            cout << "*";
        }
        else
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
