#include <iostream>
using namespace std;
void printArray(int a[],int size)
{
    int i;
    for (i = 0; i != size; i++)
    {
        cout << a[i] << " ";
    }
}

int main() 
{
    int array[3] = {1,2,3};
    printArray(array, 3);
    cout << endl;
    int array2[5] = { 1,2,3,4,5 };
    printArray(array2, 5);
    cout << endl;
    int array1[10] = { 1,2,3,4,5,6,7,8,9,10 };
    printArray(array1, 10);
    cout << endl;
    
    
    return 0;
}
