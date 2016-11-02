#include <iostream>

int main()
{
    int threeDigitNumber;
    std::cin>>threeDigitNumber;

    std::cout<<threeDigitNumber/100<<std::endl;
    std::cout<<(threeDigitNumber/10)%10<<std::endl;
    std::cout<<threeDigitNumber%10<<std::endl;

    return 0;
}
