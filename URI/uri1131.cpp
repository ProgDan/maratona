#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int i, g;

    int f = 0, s = 0, d = 0, tc = 0;
    while(cin >> i >> g){
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        tc++;
        if(i > g)
            f++;
        else if(i < g)
            s++;
        else
            d++;
        int n;
        cin >> n;
        if(n == 1)
            continue;
        else if(n == 2)
            break;
    }
    cout << tc << " grenais" << endl;
    cout << "Inter:" << f << endl;
    cout << "Gremio:" << s << endl;
    cout << "Empates:" << d << endl;
    cout << (f > s? "Inter" : "Gremio") << " venceu mais" << endl;

    return 0;
}
