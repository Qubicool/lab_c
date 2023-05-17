#include <iostream>
using namespace std;
int main()
{
    int a, b, c = 0;
    cin >> a;
    cin >> b;
    cin >> c;
    try
    {
        if (a <= 0)
            throw 1;
        if (b <= 0)
            throw 1;
        if (c <= 0)
            throw 1;
        cout << "Периметр: " << a + b + c << endl;
    }
    catch (int e)
    {
        if (e == 1) cout << "Сторона не может быть <= 0" << endl;
    }
    int age = 0;
    cout << "Введите возраст:" << endl;
    cin >> age;
    try
    {
        if (age <= 0) {
            throw (1);
        }
        if (age >= 18) cout << "Вы совершеннолетний" << endl;
        if (age < 18) cout << "Вы несовершеннолетний" << endl;
    }
    catch (int e) {
        if (e == 1) {
            cout << "Возраст не может быть <= 0!" << endl;
        }
    }
    int size = 0;
    cout << "enter size:" << endl;
    cin >> size;
    string arr[size];
    for (int i = 0; i != size; i++)
    {
        cout << "enter " << i << " el of array" << endl;
        cin >> arr[i];
    }
    int index = 0;
    cout << "введите индекс элемента массива";
    cout << endl;
    cin >> index;
    try {
        if (index > (size - 1))
        {
            throw(1);
        }
        if (index < 0)
        {
            throw(2);
        }
    }
    catch (int e) {
        if (e == 1) {
            cout << "Индекс превышает допустимый предел" << endl;
        }
        if (e == 2) {
            cout << "Индекс не может быть < 0" << endl;
        }
    }


    return 0;
}