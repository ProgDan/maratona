#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0, n; i < T; i++){
        cin >> n;

        if(n & 1)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}
