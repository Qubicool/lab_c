#include <iostream>
using namespace std;
int sumc(int a)
{
    if (a < 0) return 0;
    if (a < 10) return a;
    return a % 10 + sumc(a / 10);
}

int main()
{
    cout << sumc(1234);
}
