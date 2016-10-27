#include <iostream>

int main()
{
    double x, y, a;

    std::cin>>x>>y>>a;

    bool isInSquare = (x >= -a && x <= a && y >= -a && y <= a);
    bool isInTriangle = (y >= a && y <= 2*a) && ((y+2*a >= x) || (y + 2*a >= -x));

    bool result = (isInSquare || isInTriangle);

    std::cout<<result;

    return 0;
}
