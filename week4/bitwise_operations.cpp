#include <iostream>

int main()
{
    int number;
    int mask = 0b1;
    int n;

    std::cin>>number;
    std::cin>>n;

    // How to get Nth bit of a number if you consider counting from 1
    mask = mask << (n - 1);
    int result = number & mask;
    std::cout<<result<<std::endl;

    // How to set Nth bit a number if you consider counting from 1
    number = number | mask;

    return 0;
}
