#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    do 
    {
        cout << i << endl;
        i++;
    } while (i != 11);

        int j =1;
        int sum = 0;
        do 
        {
            sum += j;
            j++;
        }while (j!= 101);
        cout << sum << endl;

        int num;
        cout << "enter a number" << endl;
        cin >> num;
        int cnt = 0;
        int k = 1;
        do 
        {
            if (num % k == 0)
            {
                cnt += 1;
            }
            k++;
        } while (k != num+1);
        if (cnt == 2) 
        {
            cout << "SImple" << endl;
        }
        else 
        {
            cout << "No" << endl;
        }
        return 0;
}
