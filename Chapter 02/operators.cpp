#include <iostream>

int main()
{
    // Arithmetic Operators
    std::cout << "Arithmetic Operators" << std::endl;
    int a = 5, b = 2;
    std::cout << "Add: " << (a + b) << "\n";
    std::cout << "Difference: " << (a - b) << "\n";
    std::cout << "Mutiply: " << (a * b) << "\n";
    std::cout << "Divide (same types): " << (a / b) << "\n"; // if we wan answer in float then 1 value should be in float or double bcz the answer store in big dt.
    // like
    float x = 5;
    int y = 2;
    std::cout << "Divide (different types): " << (x / y) << "\n";
    // and can do type casting
    std::cout << "Type casting:" << 5 / (double)2 << "\n"; // different types

    std::cout << "Mode: " << (a % b) << "\n";

    // Relational Operators
    std::cout << "\nRelational Operators" << std::endl;
    std::cout << (3 < 5) << std::endl;  // true -> 1
    std::cout << (3 > 5) << std::endl;  // false -> 0
    std::cout << (3 != 5) << std::endl; // true -> 1

    // Logical Operator ! , || , &&
    std::cout << "\nLogical Operators" << std::endl;
    std::cout << !(3 < 5) << std::endl;             // change output if ture(1) then give false(0)
    std::cout << ((3 < 5) || (3 > 5)) << std::endl; // atleast 1 condition true then true
    std::cout << ((3 < 5) && (3 > 5)) << std::endl; // all conditions should be true the true

    return 0;
}