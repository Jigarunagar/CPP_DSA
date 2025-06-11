#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 41; j < 41 + i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
