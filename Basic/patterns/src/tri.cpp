#include<iostream>

int tri(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            std::cout<<" * ";

        }
        std::cout<<std::endl;
    }
    std::cout<<"\n"<<std::endl;
}
int nt(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            std::cout<<j;
        }
        std::cout<<std::endl;
    }
    std::cout<<"\n"<<std::endl;
}

