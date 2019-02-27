#include <bits/stdc++.h>
using namespace std;

void Print(double a, double b, double c);

int main(void)
{
    vector<double> v(3);
    for(int i = 0; i < 3; i++)
        cin >> v[i];
    sort(v.begin(), v.end());

    Print(v[2], v[1], v[0]);

    return 0;
}

void Print(double a, double b, double c)
{
    if(a >= b + c)
        cout << "NAO FORMA TRIANGULO" << endl;
    else if(a * a == b * b + c * c)
        cout << "TRIANGULO RETANGULO" << endl;
    else if(a * a > b * b + c * c)
        cout << "TRIANGULO OBTUSANGULO" << endl;
    else if(a * a < b * b + c * c)
        cout << "TRIANGULO ACUTANGULO" << endl;
    if(a == b and b == c)
        cout << "TRIANGULO EQUILATERO" << endl;
    if((a == b and b != c) or (b == c and c != a) or (c == a and a != b))
        cout << "TRIANGULO ISOSCELES" << endl;
}
