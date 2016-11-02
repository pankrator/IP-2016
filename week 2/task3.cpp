#include <iostream>
using namespace std;
int main()
{
    int threeDigitNumber;
    cin >> threeDigitNumber;

    cout << threeDigitNumber / 100 << endl;
    cout << (threeDigitNumber / 10) % 10 << endl;
    cout << threeDigitNumber % 10 << endl;

    return 0;
}
