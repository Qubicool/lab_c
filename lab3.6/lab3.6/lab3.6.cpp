#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int i2;
    for (i; i < 11; i++) 
    {
        i2 = 1;
        for (i2; i2 < 11; i2++) 
        {
            cout << i << "*" << i2 << "=" << i * i2 << endl;
        }
    }
    return 0;
}
