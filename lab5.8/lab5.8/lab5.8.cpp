#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int i = 0, k = 0;
    string s;
    cout << "String:" << endl;
    getline(cin, s); 
    while (s[i]) 
    {
        if (s[i] == ' ')
        {
            k++;
        }
        i++;
    }

    cout <<  k + 1 << "\n";
    return 0;
}