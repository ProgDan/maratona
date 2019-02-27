#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double x;
    while(1)
    {
        cin >> x;
        if(x == -1) return 0;

        if(x == 0) cout << 0 << endl;
        else cout << fixed << setprecision(0) << (x - 1) << endl;
    }

    return 0;
}
