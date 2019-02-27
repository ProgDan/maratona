#include <bits/stdc++.h>
using namespace std;

template<class T> inline T sqr(T a) { return (a * a); }
template<class T> inline T cube(T a) { return (sqr(a) * a); }

int main(void)
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
        for(int j = 0; j < 2; j++)
            cout << i << " " << sqr(i) + j << " " << cube(i) + j << endl;

    return 0;
}
