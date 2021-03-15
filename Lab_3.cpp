
#include <iostream>
using namespace std;

double CorrectNumber() {
    int n;
    while (true)
    {
        cin >> n;
        if (!cin)
        {
            cout << "Ошибка ввода!\n";
            cin.clear();
            while (cin.get() != '\n');
        }
        else {
            break;
        }
    }
    return n;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int n = 3;
    double a[3][3];
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            cout << "Введите действительное число a"<<i+1<<j+1<<": ";
            a[i][j] = CorrectNumber();
        }
    }
    cout << "Ваша матрица:\n\n";
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            cout << a[i][j]<<" ";
        }
        cout << "\n";
    }
    cout << "\nОпределитель матрицы: ";
    double det = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1]) - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0]) + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);
    cout << det;
}
