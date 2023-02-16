#include <string>
#include <iostream>
using namespace std;
int main()
{
    string str1;
    string str2;
    cout << "Enter str1" << endl;
    cin >> str1;
    cout << "Enter symb " << endl;
    cin >> str2;
    int len = str1.length();
    string sub_str = str2;
    cout << str1.find(sub_str) << endl;
    return 0;
}

