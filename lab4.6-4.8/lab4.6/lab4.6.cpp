#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
int main()
{
    int len = 0;
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        array[i] = rand() % 10;
        cout << array[i] << " ";
        len += 1;
    }
    cout << endl;
    int len1 = 0;
    int array1[5];
    for (int i = 0; i < 5; i++)
    {
        array1[i] = rand() % 10;
        cout << array1[i] << " ";
        len1 += 1;
    }
    cout << endl;
    int array2[10];
    for (int j = 0; j != 5; j++)
    {
        array2[j] = array[j];
    }
    for (int j = 0; j != 5; j++)
    {
        array2[j + 5] = array1[j];
    }
    cout << endl;
    cout << "arr1+arr2:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << array2[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout << "array1" << endl;
    int array3[5];
    for (int i = 0; i < 5; i++)
    {
        cout << array1[i] << " ";
    }
    cout << endl;
    cout << "reversed array1:" << endl;
    for (int i = len1 - 1, j = 0; i != 0, j != len1; j++, i--)
    {
        array3[j] = array1[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << array3[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout << "unique array(sum array1+array2):" << endl;
    auto res = unique(begin(array2), end(array2));
    for_each(begin(array2), res, [](int a)
        {
            cout << a << " ";
        });
    return 0;
}