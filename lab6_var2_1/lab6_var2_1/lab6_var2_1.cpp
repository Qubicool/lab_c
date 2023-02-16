#include <iostream>
using namespace std;
int sum(int a, int b) 
{
        int result = a + b;
        return result;
    }
int main()
{
    cout << sum(12,25) << endl;
    cout << sum(2, 2) << endl;
    cout << sum(24, 24) << endl;
    cout << sum(100, 25) << endl;

}
