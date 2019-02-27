#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(void)
{
    ll a, b;
    cin >> a >> b;
    a--;

    cout << ((b * (b + 1)) - (a * (a + 1))) / 2 << endl;

    return 0;
}
