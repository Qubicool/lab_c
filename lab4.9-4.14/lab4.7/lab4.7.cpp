#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    const int rows = 4;
    const int column = 4;
    int arr[rows][column];
    int sum = 0;
    int max = 0;
    int min = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            arr[i][j] = rand()%10;
            sum += arr[i][j];
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            if (arr[i][j] <  min)
            {
                min = arr[i][j];
            }

        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "sum" << " " << "min" << " " << "max" << endl;
    cout << sum << "  " << min << "  " << max << endl;
    for (int i = 0; i < rows; i++)
    {
        int summa = 0;
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j] << " ";
            summa += arr[i][j];
        }
        cout << " average arifmetic this row: " << summa/4;
        cout << endl;
    }
    cout << endl;
    cout << "Elements of main diagonal:" << endl;
    if ((rows % 2 == 0) && (column % 2 == 0))
    {
        for (int i = 0; i < rows; i++)
        {
            cout << arr[i][i] << " ";
        }
    }
    cout << endl;
    cout << endl;
    for (int i = 0; i < rows; i++)
    {
        int summa = 0;
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j] << " ";
            summa += arr[i][j];
        }
        cout <<" sum this row: " << summa;
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < rows; i++)
    {
        int maxcolumn = 0;
        for (int j = 0; j < column; j++)
        {
            if (arr[j][i] > maxcolumn)
            {
                maxcolumn = arr[j][i];
            }
        }
        cout << "max el in column " << i << ": " << maxcolumn << endl;
    }
    cout << endl;
    return 0;
}
