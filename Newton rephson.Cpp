#include <iostream>
#include <cmath>
using namespace std;

double func(double x) {
    return x * x * x - x - 2;
}

double derivFunc(double x) {
    return 3 * x * x - 1;
}

double newtonRaphson(double x, double tol) {
    double h = func(x) / derivFunc(x);
    while (fabs(h) >= tol) {
        h = func(x) / derivFunc(x);
        x = x - h;
    }
    return x;
}

int main() {
    double x0 = 1.5, tol = 0.0001;
    double root = newtonRaphson(x0, tol);
    cout << "Root: " << root << endl;
    return 0;
}
