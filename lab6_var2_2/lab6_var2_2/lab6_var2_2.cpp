#include <iostream>
using namespace std;
int even(int a)
{
    cin.setf(ios::boolalpha);
    cout.setf(ios::boolalpha);
    bool answ;
    if (a % 2 == 0)
    {
        answ = true;
        return answ;
    }
    else
    {
        answ = false;
        return answ;
    }
}


int main()
{
    cout << even(2) << endl;
    cout << even(5) << endl;
    cout << even(20) << endl;
    cout << even(77) << endl;

}
