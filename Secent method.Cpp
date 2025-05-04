#include <iostream>
#include <cmath>
using namespace std;

double func(double x) {
    return x * x * x - x - 2;
}

double secant(double x0, double x1, double tol) {
    double x2;
    while (fabs(x1 - x0) >= tol) {
        x2 = x1 - func(x1) * (x1 - x0) / (func(x1) - func(x0));
        x0 = x1;
        x1 = x2;
    }
    return x2;
}

int main() {
    double x0 = 1, x1 = 2, tol = 0.0001;
    double root = secant(x0, x1, tol);
    cout << "Root: " << root << endl;
    return 0;
}
