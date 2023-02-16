#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "Russian");
    int i = 1;
    while (i != 11) 
    {
        cout << i << endl;
        i += 1;
    }
    return 0;
}