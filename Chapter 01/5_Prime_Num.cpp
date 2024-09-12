#include <iostream>
int main()
{
    std::cout << std::endl;
    int n, i = 2;
    std::cout << "Enter a nmber: ";
    std::cin >> n;

    while (i <= n - 1)
    {
        if (n % i == 0)
        {
            std::cout << "It is a Not-Prime Number.";
            break;
        }
        else
        {
            i++;
        }
        
    std::cout << "It is a Prime Number.";
    }
    return 0;
}