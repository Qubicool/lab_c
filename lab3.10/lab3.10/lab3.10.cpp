#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter num" << endl;
    cin >> num;
    int i = 1;
    int rez = 1;
    do 
    {
        rez = i * rez;
        i++;
    } while (i != num + 1);
    cout << "factorial " << num << " is " << rez << endl;;
    return 0;
}
