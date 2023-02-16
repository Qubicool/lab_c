#include <iostream>
using namespace std;
int main()
{
    int fact;
    cout << "enter number of factorial!" << endl;
    cin >> fact;
    int i = 1;
    int rez = 1;
    while (i < fact) {
        i++;
        rez = i * rez;
    }
    cout << "factorial " << fact << " is: " << rez << endl;;

    return 0;
}
