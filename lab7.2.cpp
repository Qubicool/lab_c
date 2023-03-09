#include <iostream>
using namespace std;
void printt(int a)
{
    if (a >= 1)
    {
       printt(a - 1);
       cout << a << " ";
    }
}





int main()
{

    setlocale(LC_ALL, "Ru");
    printt(15);
    return 0;

}
