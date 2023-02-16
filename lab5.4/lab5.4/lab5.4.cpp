#include <string>
#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    string str1;
    string str2;
    cout << "enter str1" << endl;
    cin >> str1;
    cout << "enter str2" << endl;
    cin >> str2;
    if (str1.length() != str2.length())
    {
        cout << "not anagram" << endl;
    }
    int cnt = 0;
    for (int i = 0; i != str1.length(); i++)
    {
        if (count(str1.begin(), str1.end(), str1[i]) == count(str2.begin(), str2.end(), str2[i]))
        { 
            cnt += 1;
        }
    }
    if (cnt == str1.length())
    {
        cout << "anagramm" << endl;
    }
  
    return 0;
}
