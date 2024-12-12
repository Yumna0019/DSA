#include <iostream>

int main()
{
    float num1;
    int num2;
    std::cout << "Enter num 1: ";
    std::cin >> num1;
    std::cout << "Enter num 2: ";
    std::cin >> num2;

    std::cout << "Sum of 2 numbers is: " << (num1 + num2);
    std::cout << "\nDiffernece of 2 numbers is: " << (num1 - num2);
    std::cout << "\nMultiplication of 2 numbers is: " << (num1 * num2);
    std::cout << "\nDivision of 2 numbers is: " << (num1 / num2);
    std::cout << "\nModulo of 2 numbers is: " << ((int)num1 % num2);
    return 0;
}