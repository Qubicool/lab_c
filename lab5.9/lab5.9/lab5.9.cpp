#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    string str;
    cout << "enter str:" << endl;
    cin >> str;
    string str2 = str;
    reverse(str2.begin(), str2.end());
    if (str == str2)
    {
        cout << "palindrom" << endl;
    }
    else
    {
        cout << "not palindrom" << endl;
    }
    return 0;
}
