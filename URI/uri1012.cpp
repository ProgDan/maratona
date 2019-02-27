#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main(void)
{
    cout << fixed << setprecision(3);
    double a, b, c;
    cin >> a >> b >> c;

    cout << "TRIANGULO: " << (a * c) / 2.0 << endl;
    cout << "CIRCULO: " << PI * c * c << endl;
    cout << "TRAPEZIO: " << (a + b) * c * 0.5 << endl;
    cout << "QUADRADO: " << b * b << endl;
    cout << "RETANGULO: " << a * b << endl;

    return 0;
}
