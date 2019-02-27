#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int a, b, c, d;

    while(cin >> a >> b >> c >> d){
        if(a == 0 and b == 0 and c == 0 and d == 0)
            break;

        int mov;
        if(a == c and b == d)
            mov = 0;
        else if(a == c or b == d or abs(c - a) == abs(b - d))
            mov = 1;
        else
            mov = 2;

        cout << mov << endl;
    }

    return 0;
}
