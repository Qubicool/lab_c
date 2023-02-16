#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str;
    std::cout << "Enter str\n";
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
         putchar(toupper(str[i]));
    }
    return 0;
}
