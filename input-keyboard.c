#include <iostream>
using namespace std;

int main() {
    const int n = 14;
    int B[n] = { 5, -3, 7, -8, 2, -1, 9, -6, 4, -2, 10, -4, 6, -7 };

    cout << "Original array:\n";
    for (int i = 0; i < n; i++)
        cout << B[i] << " ";
    cout << endl;

    int maxAll = B[0];
    int maxNegative = -1000000;
    bool hasNegative = false;

    for (int i = 0; i < n; i++) {
        if (B[i] > maxAll)
            maxAll = B[i];
        if (B[i] < 0) {
            hasNegative = true;
            if (B[i] > maxNegative)
                maxNegative = B[i];
        }
    }

    if (hasNegative) {
        for (int i = 0; i < n; i++) {
            if (B[i] < 0) {
                if (B[i] < -5)
                    B[i] = maxAll;
                else
                    B[i] = maxNegative;
            }

        }
    }

    cout << "Modified array:\n";
    for (int i = 0; i < n; i++)
        cout << B[i] << " ";
    cout << endl;

    return 0;
}
