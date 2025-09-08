#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, r, S, P;

    cout << "Введіть a, b, c: " << endl;
    cin >> a >> b >> c;

    // Периметр 
    P = a + b + c;

    // Напівпериметр
    S = P / 2;

    // Площа за формулою Герона
    r = sqrt(S * (S - a) * (S - b) * (S - c));

    cout << "Периметр = " << P << endl;
    cout << "Півпериметр = " << S << endl;
    cout << "Площа = " << r << endl;

    return 0;
}
