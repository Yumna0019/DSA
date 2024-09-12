#include <iostream>
int main()
{
    int age;
    std::cout << std::endl;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "You can get a driving license";
    }
    else
    {
        std::cout << "Can't get driving license (You are underage).";
    }

    return 0;
}