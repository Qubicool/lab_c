#include <iostream>
#include <cstring>
using namespace std;

string lcs(string str1, string str2) 
{
    int len1 = str1.length();
    int len2 = str2.length();
    int longestres = 0;
    int longest_end_pos = 0;

    int arr[len1+1][len2+1]; // в MVS не будет работать, т.к компилятор используемый в MVS не поддерживает так называемый VLA(Variable Length Array).

    memset(arr, 0, sizeof(arr)); // заполняет массив нулями
    /*Аргументы memset:
        1 аргумент – указатель на заполняемый массив(в данном случае arr)
        2 аргумент – код символа для заполнения (0)
        3 аргумент – размер заполняемой части массива в байтах (соответственно используется sizeoff, для того чтобы узнать размер в байтах)
    */
    // в дальнейшем коде, будет заполнение двумерного массива и нахождение наибольшей подстроки
    for (int i = 1; i <= len1; i++) 
    {
        for (int j = 1; j <= len2; j++) 
        {
            if (str1[i - 1] == str2[j - 1]) 
            {
                arr[i][j] = arr[i - 1][j - 1] + 1;

                if (arr[i][j] > longestres) 
                {
                    longestres = arr[i][j];
                    longest_end_pos = i - 1;
                }
            }
        }
    }

    return str1.substr(longest_end_pos - longestres + 1, longestres); // Вычисление наибольшей подстроки
}

int main() 
{
    setlocale(LC_ALL, "ru");
    string str1;
    string str2;
    cout << "Введите строку 1" << endl;
    cin >> str1;
    cout << "Введите строку 2" << endl;
    cin >> str2;
    string lcsres = lcs(str1, str2);
    cout << "Наибольшая общая подстрока 2-х строк: " << lcsres << endl;
    return 0;
}