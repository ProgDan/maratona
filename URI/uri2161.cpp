#include <bits/stdc++.h>
using namespace std;

double V(int n);

int main(void)
{
    int n;
    cin >> n;

    cout << fixed << setprecision(10) << 3.0 + V(n - 1) << endl;

    return 0;
}

double V(int n)
{
    if(n < 0)
        return 0;
    if(n == 0)
        return 1.0 / 6.0;
    return 1.0 / (6.0 + V(n - 1));
}
