// 3. Print only multiples of 5 up to N.
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the value of N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0) {
            cout << i << endl;
        }
    }

    return 0;
}
