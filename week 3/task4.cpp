#include <iostream>

int main()
{
    int number;
    std::cin>>number;

    if (number < 1000 || number > 9999)
    {
        std::cout<<"Wrong number range. It should be in [1000, 9999]."<<std::endl;
        return 1;
    }

    int a = number % 10; // единици
    int b = number / 10 % 10; // десетици
    int c = number / 100 % 10; // стотици
    int d = number / 1000 % 10; // хилядни

    if (a == d && b == c)
    {
        std::cout<<"yes"<<std::endl;
    }
    else
    {
        std::cout<<"no"<<std::endl;
    }

    return 0;
}
