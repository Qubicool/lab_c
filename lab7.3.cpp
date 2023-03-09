#include <iostream>
using namespace std;
int nok(int a, int b)
{
    if (a == 0) return b;
    
    if (b == 0) return a;
    
    if (a == b) return a;
    
    else
        if (a > b)
            return nok(a - b, b);
    return nok(a, b - a);
    
}


int main()
{
    cout << (55 * 60) / nok(55, 60);

    return 0;
}
