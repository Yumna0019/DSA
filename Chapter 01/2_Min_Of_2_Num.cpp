#include<iostream>
int main(){
    int a,b;
    std::cout<<std::endl;
    std:: cout<<"Enter number 1: ";
    std::cin>> a;
    
    std:: cout<<"Enter number 2: ";
    std::cin>> b;
    
    if(a>b){
        std::cout<<"Min number is: "<< b;
    }else{
        std::cout<<"Min number is: " << a;
    }
    return 0;
}