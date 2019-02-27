#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    int c = 0, r = 0, s = 0;
    for(int i = 0, a; i < T; i++){
        char b;
        cin >> a >> b;

        switch(b)
        {
        case 'C':
            c += a;
            break;
        case 'R':
            r += a;
            break;
        case 'S':
            s += a;
            break;
        }
    }
    int t = c + r + s;
    cout << "Total: " << t << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << (c * 100.0) / t << " %" << endl;
    cout << "Percentual de ratos: " << (r * 100.0) / t << " %" << endl;
    cout << "Percentual de sapos: " << (s * 100.0) / t << " %" << endl;

    return 0;
}
