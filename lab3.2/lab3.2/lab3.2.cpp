#include <iostream>
using namespace std;
int main()
{
    int n;
    int cnt = 0;
    cout << "Enter number" << endl;
    cin >> n;
    int i = 1;
    while (i != n + 1) 
    {
        if ((n % i == 0)) 
        {
            cnt += 1;
        }
        if (cnt > 2) {

        }
        i += 1;
    }
    if (cnt > 2)
    {
        cout << "Not simple" << endl;
    }
    if (cnt == 2) 
    {
        cout << "Simple" << endl;

    }
    return 0;
}
