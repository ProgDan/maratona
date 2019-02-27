#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    cout << fixed << setprecision(2);

    double arr[] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    double d;
    cin >> d;
    d += 1e-9;

    cout << "NOTAS:" << endl;
    for(int i = 0; i < 6; i++){
        int a = d / arr[i];
        cout << a << " nota(s) de R$ " << arr[i] << endl;
        d -= arr[i] * a;
    }

    cout << "MOEDAS:" << endl;
    for(int i = 6; i < 12; i++){
        int a = d / arr[i];
        cout << a << " moeda(s) de R$ " << arr[i] << endl;
        d -= arr[i] * a;
    }

    return 0;
}
