#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;    
int main()
{
	string str;
	char st;
	cout << "enter str:" << endl;
	cin >> str;
	cout << "enter el:" << endl;
	cin >> st;
	for (int i = 0; i != str.length(); i++)
	{
		if (str[i] == st)
		{
			str.replace(i, 1, " ");
		 }
	}
	cout << str << endl;
	return 0;
}
