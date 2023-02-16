#include <iostream>
using namespace std;
int main()
{
    int i1 = 1;
    int i2 = 1;
    do 
    {
        i1++;
        i2 = 1;
        do 
        {
            cout << i1 << "*" << i2 << "=" << i1 * i2 << endl;
            i2++;
        } while (i2 != 11);
    } while (i1 != 10);
    return 0;
}
