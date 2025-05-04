#include <iostream>
#include <cmath>
using namespace std;

double func(double x) {
    return x * x * x - x - 2;
}

double regulaFalsi(double a, double b, double tol) {
    double c;
    while (true) {
        c = (a * func(b) - b * func(a)) / (func(b) - func(a));
        if (fabs(func(c)) < tol)
            break;
        else if (func(c) * func(a) < 0)
            b = c;
        else
            a = c;
    }
    return c;
}

int main() {
    double a = 1, b = 2, tol = 0.0001;
    double root = regulaFalsi(a, b, tol);
    cout << "Root: " << root << endl;
    return 0;
}
