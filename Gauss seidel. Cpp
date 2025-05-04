#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int n = 3;
    float a[n][n+1] = {
        {4, 1, 2, 4},
        {3, 5, 1, 7},
        {1, 1, 3, 3}
    };
    float x[n] = {0}, old_x[n];
    float tol = 0.0001;
    bool stop;
    
    do {
        stop = true;
        for (int i = 0; i < n; i++) {
            old_x[i] = x[i];
            float sum = a[i][n];
            for (int j = 0; j < n; j++) {
                if (j != i) sum -= a[i][j] * x[j];
            }
            x[i] = sum / a[i][i];
            if (fabs(x[i] - old_x[i]) > tol)
                stop = false;
        }
    } while (!stop);

    for (int i = 0; i < n; i++) {
        cout << "x" << i + 1 << " = " << x[i] << endl;
    }

    return 0;
}
