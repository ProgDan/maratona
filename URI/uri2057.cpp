#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int s, t, f;
    cin >> s >> t >> f;
    int a = s + t + f;

    if(a >= 0 and a <= 24)
        cout << a << endl;
    else if(a > 24)
        cout << a - 24 << endl;
    else
        cout << 24 + a << endl;

    return 0;
}
