#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int ft = a * 60 + b;
    int sc = c * 60 + d;
    int h, m;
    if(a <= c){
        if(sc - ft == 0)
            h = 24, m = 0;                                      //Both hour and second same
        else
            m = (sc - ft) % 60, h = (sc - ft - m) / 60;         //for hour cut the extra minute
    }
    else
        m = (24 * 60 + sc - ft) % 60, h = (24 * 60 + sc - ft - m) / 60;


    cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)" << endl;

    return 0;
}
