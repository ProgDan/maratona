#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        double a, b, c;
        cin >> a >> b >> c;

        cout << fixed << setprecision(1) << (a * 2 + b * 3 + c * 5) / 10.0 << endl;
    }

    return 0;
}
