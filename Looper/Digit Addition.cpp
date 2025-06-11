#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter any number: ";
    cin >> num;

    int lastDigit = num % 10;
    int firstDigit = num;

    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    int sum = firstDigit + lastDigit;
    cout << "The sum of the first and last digit: " << sum << endl;

    return 0;
}
