#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    if (number < 1000 || number > 9999)
    {
        std::cout << "Wrong number range. It should be in [1000, 9999]." << std::endl;
        return 1;
    }

    int ones = number % 10;
    int tens = number / 10 % 10;
    int hundreds = number / 100 % 10;
    int thousands = number / 1000 % 10;

    if (ones == thousands && tens == hundreds)
    {
        std::cout << "yes" << std::endl;
    }
    else
    {
        std::cout << "no" << std::endl;
    }

    return 0;
}
