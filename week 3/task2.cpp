#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    if (number % 2 == 0)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }

    return 0;
}
