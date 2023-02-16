#include <iostream>
using namespace std;
int main()
{
    int numb;
    cout << "enter a number" << endl;
    cin >> numb;
    int i = 1;
    int rez = 1;
    for (i; i <= numb; i++) 
    {
        rez = i * rez;
    }
    cout << "Factorial:" << rez << endl;
        return 0;
}
