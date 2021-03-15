#include <iostream>
#include <cmath>
using namespace std;

double CorrectNumber (string x) {
    double n = 0;
    while (true)
    {
        cout << x;
        cin >> n;
        if (!cin || n >= 1 || n <= -1)
        {
            cout << "Ошибка ввода!\n";
            cin.clear();
            while (cin.get() != '\n');
        }
        else break;
    }
    return n;
}

int main() 
{
    setlocale(LC_ALL, "Russian");
    double x,ln;
    const int n = 10;
    x = CorrectNumber("Выберите значение X из диапазона (0 ; 1): ");
    for (int i = n; i > 0; i--)
    {
        ln = (pow(-1, i) * pow(x, 2 * i + 1)) / (2 * i + 1);
    }
    cout <<"Ответ: " << ln;

    return 0;
}