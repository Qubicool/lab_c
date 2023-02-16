#include <iostream>
using namespace std;
int main()
{
    int c1 = 1;
    int c2 = 1;

    while (c1 < 11) {
        while (c2 < 11) {
            cout << c1 << "*" << c2 << '=' ;
            cout << c1 * c2 << endl;
            c2 += 1;
        }
        c1 += 1;
        c2 = 1;
    }
}
