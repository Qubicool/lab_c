#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "Russian");
    int temp = 0;
    cout << "Enter temperature in Fahrenheit not celsium! " << endl;
    cin >> temp;
    if (temp < 32) 
    {
        cout << "Temperature is lover than freezing point" << endl;
    }
    else 
    {
        cout << "Temperature in celsium:";
        cout << (temp - 32) * (5.0f / 9.0f) << endl;
    }
    int cont = 1;
    while (cont == 1) 
    {
        char symb;
        char contc;
        double temp = 0;
        double answ = 0;
        cout << "Введите символ C если температура в градусах Цельсия или F если в Фаренгейта" << endl;
        cin >> symb;
        if ((symb == 'c') || (symb == 'C')) 
        {
            cout << "Цельсия, введите температуру" << endl;
            cin >> temp;
            answ = (temp * (9.0f / 5.0f)) + 32;
            cout << "temp in Farenheit:";
            cout << answ << endl;
            if (answ == 32) 
            {
                cout << " temp is freeze point" << endl;
            }
            if (answ < 32) 
            {
                cout << "Freezes lower 32F!" << endl;
            }
            if (answ > 32) 
            {
                cout << "upper than freeze point" << endl;
            }
        }
        if ((symb == 'f') || (symb == 'F')) 
        {
            cout << "Фаренгейт, введите температуру" << endl;
            cin >> temp;
            answ = (temp - 32) * (5.0f / 9.0f);
            cout << "Tepmperature in cels:";
            cout << answ << endl;
            if (answ == 0) 
            {
                cout << "temp is freeze point" << endl;
            }
            if (answ < 0) 
            {
                cout << "Freezes, lower 0C!" << endl;
            }
            if (answ > 0) 
            {
                cout << "upper than freeze point!" << endl;
            }
        }
        if ((symb != 'c') && (symb != 'C') && (symb != 'f') && (symb != 'F')) 
        {
            cout << "use correct symbols!" << endl;
        }

        cout << "You wanna to continue (y/n)?" << endl;
        cin >> contc;
        if ((contc == 'y') || (contc == 'Y')) 
        {
            cont = 1;
        }
        else {
            cout << "Bye!" << endl;
            cont = 0;
        }
    }
    return 0;
}