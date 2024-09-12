#include <iostream>
int main()
{
    std::cout << std::endl;
    double p, r, t, SI;
    std::cout << "Enter Principal, Rate & Time: ";
    std::cin >> p >> r >> t;
    std::cout << std::endl;
    SI = (p * r * t) / 100;
    std::cout<<"Simple Interest is: "<<SI;
    return 0;
}