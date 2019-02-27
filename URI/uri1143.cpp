#include <bits/stdc++.h>
using namespace std;

template<class T> inline T sqr(T a) { return (a * a); }
template<class T> inline T cube(T a) { return (sqr(a) * a); }

int main(void)
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
        cout << i << " " << sqr(i) << " " << cube(i) << endl;

    return 0;
}
