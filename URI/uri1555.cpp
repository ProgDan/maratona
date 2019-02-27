#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

template<class T> inline T sqr(T a) { return a * a; }

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0, x, y; i < T; i++){
        cin >> x >> y;

        ll r = sqr(3 * x) + sqr(y);
        ll b = 2 * sqr(x) + sqr(5 * y);
        ll c = -100 * x + sqr(y) * y;

        if(r > max(b, c))
            cout << "Rafael ganhou" << endl;
        else if(b > max(r, c))
            cout << "Beto ganhou" << endl;
        else
            cout << "Carlos ganhou" << endl;
    }

    return 0;
}
