#include<iostream>

// Function declaration
void printName(int n);

int main() {
    std::cout << "\n\t Enter the value: ";
    int x;
    std::cin >> x;
    std::cout << "\n\t Value: " << x <<"\n";
    printName(x);
    
    return 0;
}


//function & problem statements
//Functions: Linked with a well-defined task.

// Function definition
void printName(int n){
   
    for(int i=0;i<n;i++){
        std::cout<< " ram \n";
    }


}