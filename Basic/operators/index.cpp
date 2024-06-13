#include <iostream>
using namespace std;

int sum(int x, int y)
{
    return x + y;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int d(int x,int y){
    cout<<"\n\t divison of x of y : "<<x/y<<endl;
}

int main()
{
    cout << "\n\t operators " << endl;
    int x, y;
    cout << "\n\t Enter the value x : ";
    cin >> x;
    cout << "\n\t Enter the value y : ";
    cin >> y;
    cout << "\n\t Sum of x and y is: " << sum(x, y) << endl;
    cout << "\n\t Sub of x and y is: " << sub(x, y) << endl;
    cout << "\n\t product of x and y is :" << mul(x, y) << endl;
    d(x,y);
    return 0;
}
