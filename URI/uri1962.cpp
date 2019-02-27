#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0, n; i < T; i++){
        cin >> n;
        if(n < 2015)
            cout << 2015 - n << " D.C." << endl;
        else
            cout << n - 2014 << " A.C." << endl;
    }

    return 0;
}
