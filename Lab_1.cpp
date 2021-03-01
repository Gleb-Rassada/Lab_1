#include <iostream>
#include <cmath>

using namespace std;

double CorrectNumber(string x) {
    int n;
    while (true)
    {
        cout << x;
        cin >> n;
        if (!cin||n<0)
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
    double H, U, S, T, g;
    g = 9.8;
    H = CorrectNumber("Введите высоту: ");
    U = CorrectNumber("Введите скорость: ");
    T = pow(2 * H / g, 0.5);
    S = U * T;
    cout << "Подлётное расстояние до объекта: " << S;
    return 0;
}