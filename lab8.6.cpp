#include <iostream>
using namespace std;
void pls(int* num)
{
	*num += 1;
}

int main()
{
	setlocale(LC_ALL, "Ru");


	int num = 0;
	cout << "Введите число:" << endl;
	cin >> num;
	pls(&num);
	cout << num << endl;
	return 0;
}