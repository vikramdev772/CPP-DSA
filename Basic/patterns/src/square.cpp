#include <iostream>

int sq(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        std::cout<<"*";
        }
        std::cout<<"\n";
    }
    std::cout<<"\n"<<std::endl;
}