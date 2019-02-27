#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int h, m;
    char ch;

    while(cin >> h >> ch >> m){
        int dm = 0;
        m += 60;
        if(m >= 60){
            h++;
            m -= 60;
        }
        if(h >= 8)
            dm = (h - 8) * 60 + m;

        cout << "Atraso maximo: " << dm << endl;
    }

    return 0;
}
