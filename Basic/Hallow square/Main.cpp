#include <iostream>
#include "Square.h"
using namespace std;

int main() {
    cout << "Exploring Square Patterns in C++\n\n";

    int size;
    cout << "Enter the size of the square: ";
    cin >> size;

    Square square(size);
    square.draw();

    return 0;
}
