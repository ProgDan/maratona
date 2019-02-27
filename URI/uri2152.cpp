#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0, a, b, c; i < T; i++){
        cin >> a >> b >> c;

        if(a < 10)
            cout << 0 << a;
        else
            cout << a;
        cout << ":";
        if(b < 10)
            cout << 0 << b;
        else
            cout << b;
        cout << " - A porta";
        if(c == 1)
            cout << " abriu!" << endl;
        else
            cout << " fechou!" << endl;
    }

    return 0;
}
