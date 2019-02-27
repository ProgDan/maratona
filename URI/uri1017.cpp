#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int a, b;
    cin >> a;
    cin >> b;

    cout << fixed << setprecision(3) << (a * b * 1.0) / 12.0 << endl;
    return 0;
}
