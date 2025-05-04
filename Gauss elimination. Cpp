#include <iostream>
using namespace std;

int main() {
    int n = 3;
    float a[3][4] = {
        {2, -1, 1, 3},
        {1, 3, 2, 12},
        {1, -1, 2, 0}
    };
    float x[3];

    for (int i = 0; i < n; i++) {
        for (int k = i + 1; k < n; k++) {
            float factor = a[k][i] / a[i][i];
            for (int j = i; j <= n; j++) {
                a[k][j] -= factor * a[i][j];
            }
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        x[i] = a[i][n];
        for (int j = i + 1; j < n; j++) {
            x[i] -= a[i][j] * x[j];
        }
        x[i] /= a[i][i];
    }

    for (int i = 0; i < n; i++) {
        cout << "x" << i + 1 << " = " << x[i] << endl;
    }

    return 0;
}
