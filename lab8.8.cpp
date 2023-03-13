#include <iostream>
#include <string>
using namespace std;
int lenstr(string* str)
{
    cout << str->length();

    return 0;
}


int main()
{
    string str;
    cout << "Enter string" << endl;
    getline(cin, str);
    string* pstr = &str;
    lenstr(pstr);

    return 0;
}
