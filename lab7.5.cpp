#include <iostream>
using namespace std;
// Небольшая памятка: в параметрах функций массивы «превращаются» в указатели. 
// int lcs(int arr[]) == int lcs(int *arr) 


int proizvarr(int arr[], int size)
{
    int res = 1;
    for (int i = 0; i != size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            res *=  arr[i];
        }
    }
    return res;
}
int main()
{
    int size;
    cout << "Enter a size of array: " << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i != size; i++)
    {
        cout << "Enter " << i << " element of array" << endl;
            cin >> arr[i];
    }
    for (int i = 0; i != size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << proizvarr(arr, size);
}
