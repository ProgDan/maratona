#include <bits/stdc++.h>
using namespace std;

bool triangle(double a, double b, double c);

int main(void)
{
    double a, b, c;
    cin >> a >> b >> c;

    cout << fixed << setprecision(1);
    if(triangle(a, b, c))
        cout << "Perimetro = " << a + b + c << endl;
    else
        cout << "Area = " << 0.5 * (a + b) * c << endl;

    return 0;
}

bool triangle(double a, double b, double c)
{
    if(a + b > c and b + c > a and c + a > b)
        return 1;
    else
        return 0;
}
