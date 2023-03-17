#include <iostream>
void fill(int* arr, int size, int num)
{
    for (int i = 0; i<size; i++)
    {
        arr[i] = num;
    }
}
int main()
{
    int size = 0;
    std::cout << "enter size:" << std::endl;
    std::cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "enter " << i << " el of array" << std::endl;
        std::cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    int num = 0;
    std::cout << std::endl;
    std::cout << "enter num" << std::endl;
    std::cin >> num;
    fill(arr,size,num);
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    
    return 0;
}
