#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a = 12.5;
    double b = 3.5;

    // Basic arithmetic
    cout << "Addition: " << (a + b) << endl;
    cout << "Subtraction: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;
    cout << "Division: " << (a / b) << endl;

    // More advanced math
    cout << "Power (a^b): " << pow(a, b) << endl;
    cout << "Square root of a: " << sqrt(a) << endl;
    cout << "Sine of a (in radians): " << sin(a) << endl;

    return 0;
}
