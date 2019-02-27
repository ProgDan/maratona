#include <bits/stdc++.h>
#define Fix 1.25506
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    cout << fixed << setprecision(1) << (n / log(n)) << " " << (Fix * n) / log(n) << endl;

    return 0;
}
