#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    map<double, int> m;
    double n;
    for(int i = 0, a; i < T; i++){
        cin >> a >> n;
        if(n >= 8.0)
            m[n] = a;
    }

    if(m.empty())
        cout << "Minimum note not reached" << endl;
    else{
        map<double, int>::iterator it;
        it = m.end();
        it--;
        cout << it->second << endl;
    }

    return 0;
}
