// #include <iostream>
// int main()
// {
//     std::cout << std::endl;
//     int n, i = 2;
//     std::cout << "Enter a nmber: ";
//     std::cin >> n;

//     while (i <= n - 1)
//     {
//         if (n % i == 0)
//         {
//             std::cout << "It is a Not-Prime Number.";
//             break;
//         }
//         else
//         {
//             i++;
//         }
        
//     std::cout << "It is a Prime Number.";
//     }
//     return 0;
// }




#include <iostream>
int main()
{
    std::cout << std::endl;
    int n, i = 2;
    bool isPrime = true;  // Assuming the number is prime initially

    std::cout << "Enter a number: ";
    std::cin >> n;

    // Check divisibility from 2 to n-1
    while (i <= n - 1)
    {
        if (n % i == 0)
        {
            isPrime = false;  // If divisible, it's not a prime number
            break;
        }
        i++;
    }

    // Print result based on isPrime flag
    if (isPrime && n > 1)
        std::cout << "It is a Prime Number.";
    else
        std::cout << "It is a not Prime Number.";

    return 0;
}
