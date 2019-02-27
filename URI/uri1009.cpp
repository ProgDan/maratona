#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string s;
    cin >> s;
    double a, b;
    cin >> a;
    cin >> b;

    cout << fixed << setprecision(2) << "TOTAL = R$ " << a + (b * 0.15) << endl;

    return 0;
}
