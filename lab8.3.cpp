//#include <iostream>
//using namespace std;
//void func(int& arr)
//{
//    for (int i = 0; i != size; i++)
//    {
//        for (int j = 1; j != size - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                swap(arr[j], arr[j + 1]);
//            }
//        }
//    }
//    for (int i = 0; i != size; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//int main()
//{
//    int size = 0;
//    cout << "Enter a size of array:" << endl;
//    cin >> size;
//    int arr[size];
//    for (int i = 0; i != size; i++)
//    {
//        cout << "enter " << i << " element of array" << endl;
//        cin >> arr[i];
//    }
//    cout << " array" << endl;
//    for (int i = 0; i != size; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//    func(arr, size);
//}
#include <iostream>
using namespace std;
void fill(int* arr, int num, int size)
{
	for (int i = 0; i != size; i++)
	{
		arr[i] = num;
	}
}
int main()
{
	int size = 5;
	int arr[5] = { 1,2,3,4,5 };
	for (int i = 0; i != size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	fill(arr, 12, 5);
	for (int i = 0; i != size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}

