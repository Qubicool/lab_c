#include <iostream>
using namespace std;

double calculateAverage(int size, int arr[])
{
    double sum = 0;
    int cnt = size; 
    for (int i = 0; i != cnt; i++)
    {
        sum += arr[i];
    }
    return sum / (double)size;
}
int main()
{
    int array[] = {1,2,3};
    cout << calculateAverage(3,array) << endl;
    int array2[] = { 1,2,3,4,5 };
    cout << calculateAverage(5, array2) << endl;
    int array3[] = { 1,2,3,4,5,6,7,8,9,10 };
    cout << calculateAverage(10, array3) << endl;

    return 0;
}
