#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int n, tc = 1;

    while(cin >> n){
        if(n == 0)
            break;

        map<int, int> m;
        int totalx = 0, totaly = 0;
        for(int i = 0, x, y; i < n; i++){
            cin >> x >> y;
            totalx += x;
            totaly += y;
            m[y/x] += x;
        }

        cout << "Cidade# " << tc++ << ":" << endl;
        map<int, int>::iterator it;
        map<int, int>::iterator j;
        j = m.end();
        j--;
        for(it = m.begin(); it != m.end(); it++){
            cout << it->second << "-" << it->first;
            if(it == j)
                cout << endl;
            else
                cout << " ";
        }
        cout << fixed << setprecision(2) << "Consumo medio: " << floor(100 * (double)totaly / totalx) / 100 << " m3." << endl;
        cout << endl;
    }

    return 0;
}
