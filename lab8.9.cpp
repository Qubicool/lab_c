#include <iostream>
using namespace std;

int arrcalc(int* arr, int size)
{
    int sum = 0;
    for (int i = 0; i != size; i++)
    {
        sum += arr[i];
    }
    cout << float(sum) / float(size) << endl;
    return 0;
}

int main()
{
    int size = 0;
    cout << "Enter a size of array" << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i != size; i++)
    {
        cout << "enter " << i << " element of array" << endl;
        cin >> arr[i];
    }
    cout << "arithmetical mean of array: ";
    arrcalc(arr, size);

    return 0;
}
