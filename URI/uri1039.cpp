#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int r1, a, b, r2, c, d;

    while(cin >> r1 >> a >> b >> r2 >> c >> d){
        int m = a - c;
        int n = b - d;
        int r = r1 - r2;
        if(m * m + n * n <= r * r){
            if((a == c and b == d) or r2 > r1)
                cout << "MORTO" << endl;
            else
                cout << "RICO" << endl;
        }
        else
            cout << "MORTO" << endl;
    }

    return 0;
}
