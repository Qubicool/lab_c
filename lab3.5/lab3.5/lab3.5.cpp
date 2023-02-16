#include <iostream>
using namespace std;
int main()
{
    int k = 1;
    for (k; k != 11; k++) 
    {
        cout << k << endl;
    }
    int j = 1;
    int sum = 0;
    for (j; j != 101; j++) {
        sum += j;
    }
    cout << sum << endl;
    int numb;
    cout << "enter number" << endl;
    cin >> numb;
    int cnt = 0;
    int i = 1;
    for (i; i != numb + 1; i++)
    {
        if (numb % i == 0)
        {
            cnt += 1;
        }
        if (cnt > 2)
        {
            break;
        }
    }
    if (cnt == 2) 
    {
        cout << "Simple" << endl;
    }
    else 
    {
        cout << "Not simple" << endl;
    }

    return 0;
}
