#include <iostream>
#include <string>
#include "Developer.h" // Include the header file

using namespace std;

int main() {
    Developer d1;
    d1.name = "ram";
    cout << "\n\tDeveloper name: " << d1.name << endl;
    d1.setSalary(80000);
    cout<<"\n\t Salary : "<<d1.getSalary();
    return 0;
}

//  Developer name: ram

//          Salary : 80000