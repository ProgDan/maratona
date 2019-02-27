#include <bits/stdc++.h>
#define Cin3(a, b, c) cin >> a >> b >> c
using namespace std;

int main(void)
{
    double a, b, c;
    Cin3(a, b, c);

    if(a == 0 || ((b * b - 4 * a * c) < 0))
        cout << "Impossivel calcular" << endl;
    else{
        cout << fixed << setprecision(5);
        double e, f;
        e = (- b * 1.0 + sqrt(b * b - 4 * a * c)) / (2.0 * a);
        f = (- b * 1.0 - sqrt(b * b - 4 * a * c)) / (2.0 * a);
        cout << "R1 = " << e << endl;
        cout << "R2 = " << f << endl;
    }

    return 0;
}
