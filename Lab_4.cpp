#include <iostream>
#include <cmath>
using namespace std;

double CorrectNumber(string x) {
    double n = 0;
    while (true)
    {
        cout << x;
        cin >> n;
        if (!cin)
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
    double x = CorrectNumber("Введите x: ");
    const int border = 3;
    int degree = 2;
    int divisor = 2;
    double y = 0;
    
    for (int i = 0; i < border; i++) {
        double div_fac = 1;
        for (int i = 1; i <= divisor; i++) {
          
            div_fac = div_fac * i;
        }
        y = y + (pow(x, degree) / div_fac);
        divisor = divisor + 2;
        degree = degree + 2;

    }
    double chx = y + 1;
    cout <<"\n"<<"Гиперболический косинус x с границей ряда 3 = "<< chx;
    return 0;
}