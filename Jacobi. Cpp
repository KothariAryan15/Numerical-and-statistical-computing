#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x0 = 0, x1 = 0, x2 = 0;
    float y0, y1, y2;
    float tol = 0.0001;
    
    do {
        y0 = (6 + x1 - 2 * x2) / 10;
        y1 = (25 + x0 + x2) / 11;
        y2 = (-11 - 2 * x0 + x1) / 10;

        if (fabs(y0 - x0) < tol && fabs(y1 - x1) < tol && fabs(y2 - x2) < tol)
            break;

        x0 = y0;
        x1 = y1;
        x2 = y2;

    } while (true);

    cout << "x = " << x0 << endl;
    cout << "y = " << x1 << endl;
    cout << "z = " << x2 << endl;

    return 0;
}
