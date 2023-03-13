#include <iostream>
using namespace std;
void swp(int* a, int *b)
{
    swap(*a, *b);

}
int main()
{
    int a = 0;
    int b = 0;
    cout << "Enter num 1" << endl;
    cin >> a;
    cout << "Enter num 1" << endl;
    cin >> b; 
    int* pa = &a;
    int* pb = &b;
    cout << a << " " << b << endl;
    swp(pa,pb);
    cout << a << " " << b << endl;
    return 0;
}
