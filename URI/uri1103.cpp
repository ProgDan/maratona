#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a, b, c, d;

    while(cin >> a >> b >> c >> d){
        if(a == 0 and b == 0 and c == 0 and d == 0)
            break;

        int f = a * 60 + b;
        int s = c * 60 + d;
        if(s < f)
            s += 24 * 60;

        cout << s - f << endl;
    }

    return 0;
}
