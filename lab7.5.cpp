#include <iostream>
using namespace std;
// Небольшая памятка: в параметрах функций массивы «превращаются» в указатели. 
// int lcs(int arr[]) == int lcs(int *arr) 

int lca(int arr[], int size)
{
    if (size <= 0)
    {
        return 0;
    }
    else 
    {
        arr[size];
        size = size-1;
        lca(arr, size);
        if (arr[size-1] < arr[size])
        {
            cout << arr[size] << " ";
        }
    }    
    return 0;
}

int main()
{
    const int size = 7;
    int arr[size] = {1,2,4,1,-2,7,8};
    cout << endl;
    lca(arr, size);
    return 0;
}
