#include <iostream>
#include <cmath>
using namespace std;

class ClassSh {
public:
    double x;
    int border;
    double shx;
    int divisor;

    void DivisorF() {
        for (int i = 1; i < 2 * border + 1; i++) {
            divisor *= i;
        }
        cout << endl << divisor << endl;
    }
    void Shinus() {
        for (int i = 0; i < border; i++) {
            shx +=pow(x,2* border)/divisor;
            }
        }
    void Show() {
        cout << endl << "Гиперболический косинус x с границей ряда 3 = " << shx << endl;
    }

    } obj1;

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
    obj1.x = CorrectNumber("Введите x: ");
    obj1.border = 3;
    obj1.divisor = 1;
    obj1.DivisorF();
    obj1.Shinus();
    obj1.Show();
    return 0;
}
