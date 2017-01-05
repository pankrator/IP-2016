#include <iostream>

int main()
{
    int x, y;
    int width, height;
    int step, delta, threshold;

    std::cin >> width >> height >> x >> y >> step >> delta >> threshold;

    while (step > threshold)
    {
        // Right
        x += step;

        // Down
        y += step;

        step -= delta;

        // Left
        x -= step;

        // Up
        y -= step;

        step -= delta;
    }

    std::cout << x << std::endl << y << std::endl;

    return 0;
}
