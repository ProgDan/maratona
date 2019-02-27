#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    double sum = 0.0;
    for(int i = 0, n, m; i < 2; i++){
        double d;
        cin >> n >> m >> d;
        sum += (m * d);
    }

    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << sum << endl;

    return 0;
}
