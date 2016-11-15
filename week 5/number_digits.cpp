#include <iostream>
#include <math.h>

int main()
{
    long long number;
    bool isMatched = false;
    int numberOfDigits = 5;

    while (true) {
        std::cout << "Number=";
        std::cin >> number;

        int firstDigit, secondDigit;
        for (int i = 0; i < numberOfDigits - 1; i++)
        {
            if (!isMatched) {
                firstDigit = (int)(number / pow(10, i)) % 10;
                for (int j = i + 1; j < numberOfDigits; j++)
                {
                    secondDigit = (int)(number / pow(10, j)) % 10;
                    if (firstDigit == secondDigit) {
                        isMatched = true;
                    }
                }
            }
        }

        if (isMatched)
        {
            std::cout << "Yes " << firstDigit << std::endl;
        }
        else
        {
            std::cout << "No" << std::endl;
        }

    }

    return 0;
}
