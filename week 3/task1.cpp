#include <iostream>

int main()
{
    double number1, number2;

    std::cin >> number1 >> number2;

    double result = (number1 > number2) ? number1 : number2;
    std::cout << result << std::endl;
}
