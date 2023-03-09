#include <iostream>
using namespace std;
int sum(int a)
{
    if (a >= 1)
    {
        return (sum(a-1) + a);
    }
}
int main()
{
    cout << sum(5)-1 << endl;
    return 0;
}
