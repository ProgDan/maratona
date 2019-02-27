#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b);

int main(void)
{
    int T;
    cin >> T;

    for(int i = 1, a, b; i <= T; i++){
        cin >> a >> b;

        cout << gcd(a, b) << endl;
    }

    return 0;
}

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b, a % b);
}
