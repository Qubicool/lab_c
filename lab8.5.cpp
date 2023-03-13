#include <iostream>
#include <string>
using namespace std;
/*Напишите функцию, которая принимает два аргумента: массив строк и строку для поиска.
Функция должна подсчитывать, сколько раз строка для поиска встречается в массиве строк, и возвращать это количество.
Оба аргумента должны передаваться по ссылке, чтобы не создавать копий массива и строки для поиска.*/
int findd(string* arr, int size, string str)
{
    int cnt = 0;
    for (int i = 0; i != size; i++)
    {
        if (arr[i] == str)
        {
            cnt += 1;
        }
    }
    cout << cnt << endl;

    return 0;
}

int main()
{
    int size = 0;
    cout << "enter size:" << endl;
    cin >> size;
    string arr[size];
    for (int i = 0; i != size; i++)
    {
        cout << "enter " << i << " el of array" << endl;
        cin >> arr[i];
    }
    for (int i = 0; i != size; i++)
    {
        cout << arr[i] << " ";
    }
    string str;
    cout << endl;
    cout << "enter str" << endl;
    cin >> str;
    findd(arr, size, str);

    return 0;
}