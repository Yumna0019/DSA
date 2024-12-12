#include<iostream>
int main(){
    int a,b;
    std::cout<<std::endl;
    std:: cout<<"Enter number 1: ";
    std::cin>> a;
    
    std:: cout<<"Enter number 2: ";
    std::cin>> b;
    
    if(a>b){
        std::cout<<"Max number is: "<< a;
    }else{
        std::cout<<"Max number is: " << b;
    }
    return 0;
}