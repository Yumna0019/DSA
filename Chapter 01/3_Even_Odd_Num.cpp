#include<iostream>
int main(){
    std::cout<<std::endl;
    int n;
    std::cout<<"Enter a number: ";
    std::cin>> n;

    if (n%2 == 0){
        std::cout<<"It is an Even number.";
    }else{
        std::cout<<"It is an Odd number.";
    }
    return 0;
}