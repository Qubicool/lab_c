#include <iostream>
using namespace std;
int calculatePower(int a, int b)
{
    return pow(a, b);
}
int main()
{
    cout << calculatePower(2, 4) << endl;
    cout << calculatePower(2, 8) << endl;
    cout << calculatePower(2, 12) << endl;
    cout << calculatePower(5, 5) << endl;
    return 0;
}
