#include <iostream>
int main()
{
    std::cout << std::endl;
    int n, sum = 0;
    std::cout << "Enter a number(n) to calculate the sum from 0 to n: ";
    std::cin >> n;

    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    std::cout << "The sum of numbers from 0 to " << n << " is: " << sum << std::endl;
    return 0;
}