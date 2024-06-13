#include<iostream>

using namespace std;

int sum(int n) {
    if (n == 1) // Base case
        return 1;
    else
        return n + sum(n - 1);
}

int d(int n, int m) {
    if (m == 0) {
        cout << "Error: Division by zero\n";
        return 0; 
        }
    return n / m;
}

int main() {
    cout << "\n\t Logical operators \n";
    int x, m = 0;
    cout << "Enter a number: ";
    cin >> x;
    cout << "\n\t Value x: " << x;
    cout << "\n\t Division : ";
    if (m != 0)
        cout << d(x, m) << endl;
    else
        cout << "Cannot divide by zero" << endl;
    cout << "\n\t Sum of 1 to " << x << ": " << sum(x) << endl;
    cout<<"\n\t 1+2+3+....infiny : -1/12\n"<<endl;



    return 0;
}
