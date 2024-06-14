#include <iostream>
#include "Factorial.h"

using namespace std;

int main() {
    FactorialCalculator factorialCalculator;

    int n;
    cout << "Enter a number to calculate its factorial: ";
    cin >> n;

    int result = factorialCalculator.calculateFactorial(n);
    cout << "Factorial of " << n << " is: " << result << endl;

    return 0;
}
