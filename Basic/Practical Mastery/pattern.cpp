#include <iostream>
#include "Triangle.h"

using namespace std;

int main() {
    cout << "\n\tPatterns\n";

    int n;
    cout << "\n\tEnter a number: ";
    cin >> n;

    Triangle t;
    t.triangle(n);

    return 0;
}
