#include <iostream>
using namespace std;

int sum(int x, int y) {
    return x + y;
}

int main() {
    cout << "\n\t operators " << endl;
    int x, y;
    cout << "\n\t Enter the value x : ";
    cin >> x;
    cout << "\n\t Enter the value y : ";
    cin >> y;
    cout << "\n\t Sum of x and y is: " << sum(x, y) << endl;
    return 0;
}

