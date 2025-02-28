/* print this pattern
  0000000000
  0000  0000
  000    000
  00      00
  0        0
  00      00
  000    000
  0000  0000
  0000000000



*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input the number of rows (should be an even number): ";
    cin >> n;

    // Upper half
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for (int i = n / 2 - 1; i >= 0; i--) {
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }

return 0;
}