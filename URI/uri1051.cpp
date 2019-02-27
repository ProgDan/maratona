#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    double d;
    cin >> d;

    cout << fixed << setprecision(2);
    if(d >= 0.00 and d <= 2000.00)
        cout << "Isento" << endl;
    else if(d >= 2000.00 and d <= 3000.00){
        cout << "R$ " << ((d - 2000.00) * 8.0) / 100.00 << endl;
    }
    else if(d >= 3000.01 and d <= 4500.00){
        double extra = (1000.0 * 8.0) / 100.0;
        cout << "R$ " << (((d - 3000.00) * 18.00) / 100.0) + extra << endl;
    }
    else if(d > 4500.00){
        double extra = ((1000.0 * 8.0) / 100.0) + ((1500.0 * 18.0) / 100.0);
        cout << "R$ " << (((d - 4500.00) * 28.0) / 100.00) + extra << endl;
    }

    return 0;
}
