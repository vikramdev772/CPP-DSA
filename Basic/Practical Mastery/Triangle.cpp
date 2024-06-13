#include "Triangle.h"
#include <iostream>

void Triangle::triangle(int n) {
    std::cout << "\n\tTriangle star pattern\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << " * ";
        }
        std::cout << "\n";
    }
}
