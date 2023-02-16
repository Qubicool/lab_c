#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int age = 0;
    cout << "Enter your age" "\n";
    cin >> age;
    if (age < 18) 
    {
        cout << "Your age is under 18";
    }
    if (age >= 18 && age < 30) 
    {
        cout << "Your age is over 18 and under 30!";
    }
    if (age >= 30 && age < 60) 
    {
        cout << "Вы находитесь в среднем возрасте!";
    }
    if (age > 60)
    {
        cout << "Вы пожилой гражданин";
    }
    return 0;
}