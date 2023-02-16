#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int len = 0;
    int sum = 0;
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % 10;
        cout << array[i] << " ";
        sum += array[i];
        len += 1;
    }
    cout << endl;
    int max = array[0];
    int min = array[0];
    int n = 0;
    for (n; n != len; n++)
    {
        if (array[n] > max)
        {
            max = array[n];
        }
        if (array[n] < min)
        {
            min = array[n];
        }
    }
    cout << "Max el: " << max << endl;
    cout << "Min el: " << min << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++) {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
            }
        }
    }
    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    cout << "Sum" << " " << "Len" << endl;
    cout << sum << " " << len << endl;
    cout << "sr arifm:" << (float(sum) / float(len)) << endl;
    int num = 0;
    cout << "Enter a number which i need to find it index" << endl;
    cin >> num;
    for (int p =0; p!= len; p++)
    {
        if (array[p] == num)
        {
            cout << p << endl;
        }
    }

    return 0;
}