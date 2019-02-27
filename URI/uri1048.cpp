#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    double a;
    cin >> a;

    int p;
    if(a >= 0 and a <= 400.00)
        p = 15;
    else if(a >= 400.01 and a <= 800.00)
        p = 12;
    else if(a >= 800.01 and a <= 1200.00)
        p = 10;
    else if(a >= 1200.01 and a <= 2000.00)
        p = 7;
    else
        p = 4;

    cout << fixed << setprecision(2);
    cout << "Novo salario: " << a + ((a * p) / 100.00) << endl;
    cout << "Reajuste ganho: " << (a * p) / 100.00 << endl;
    cout << "Em percentual: " << p << " %" << endl;

    return 0;
}
