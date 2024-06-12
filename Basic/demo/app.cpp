#include<iostream>

void printNumbers(){
    int n;
    std::cout<<"\n\t Enter the value of n : ";
    std::cin>>n;
    for(int i=1;i<=n;i++){
        std::cout<<i<<"\n";
    }

}


// Function declaration
void printName(int n);

int main() {
    std::cout << "\n\t Enter the value: ";
    int x;
    std::cin >> x;
    std::cout << "\n\t Value: " << x <<"\n";
    printName(x);
    //function call
    printNumbers();
    
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


// C:\Users\ram77\OneDrive\Desktop\DSA\CPP-DSA\Basic\demo>g++ app.cpp -o app

// C:\Users\ram77\OneDrive\Desktop\DSA\CPP-DSA\Basic\demo>.\app

//          Enter the value: 2

//          Value: 2
//  ram
//  ram

//          Enter the value of n : 3
// 1
// 2
// 3

