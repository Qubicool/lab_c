#include <iostream>
using namespace std;
void twoa(int& a, int& b)
{
    a = a * b;
        
}
void swp(int &a,int &b)
{
    swap(a, b);
}
int main()
{
    cout <<"a " << " b " << endl;
    int a = 5;
    int b = 3; 
    cout << a << " " << b << endl;
    swp(a, b);
    cout << a <<" " << b << endl;
    twoa(a, b);
    cout << a << " " << b << endl;

}
