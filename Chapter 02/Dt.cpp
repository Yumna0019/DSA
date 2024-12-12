#include<iostream>

int main(){
    // Primitive Dt
    int age = 25;
    char grades = 'A';   //A -> 65 , a -> 97.
    float PI = 3.14f;
    double price = 100.99;
    bool issafe = true;

    std::cout << age << " , " << grades << " , " << PI << " , " << price << " , " << issafe << "\n" ;


    //Conversion = Implicit : Small -> Big       // Compolier do that
    char grade = 'a';
    int value = grade;
    std::cout << value << "\n" ; 

    //Type Casting = Explicit : Big -> Small         // Programmer have to do it
    double number = 100.99;
    int num = (int)number;    // in int after decimal value ignore like .99  in int it's only 100.
    std::cout << num << "\n " ;

    return 0;
}