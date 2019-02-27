#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    cin.ignore();

    string s;
    int ts = 0, tb = 0, ta = 0;
    int ss = 0, sb = 0, sa = 0;
    for(int i = 0; i < T; i++){
        cin >> s;
        for(int j = 0, a, b, c; j < 2; j++){
            cin >> a >> b >> c;
            if(!j)
                ts += a, tb += b, ta += c;
            else
                ss += a, sb += b, sa += c;
        }
    }

    cout << fixed << setprecision(2);
    cout << "Pontos de Saque: " << (ss * 100.0) / ts << " %." << endl;
    cout << "Pontos de Bloqueio: " << (sb * 100.0) / tb << " %." << endl;
    cout << "Pontos de Ataque: " << (sa * 100.0) / ta << " %." << endl;

    return 0;
}
