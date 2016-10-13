#include <iostream>

int main()
{
    int a, b;

    std::cin>>a>>b;
    a = a + b;
    b = a - b;
    a = a - b;

    std::cout<<"a="<<a<<std::endl;
    std::cout<<"b="<<b<<std::endl;

    return 0;
}
