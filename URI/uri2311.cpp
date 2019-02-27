#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int T;
    cin >> T;


    for(int i = 0; i < T; i++){
        string s;
        cin >> s;
        double a, d, total = 0, mx = 0.0, mn = 100.0;

        cin >> d;
        for(int j = 0; j < 7; j++){
            cin >> a;
            total += a;
            if(a > mx)
                mx = a;
            if(a < mn)
                mn = a;
        }
        total -= (mx + mn);

        cout << fixed << setprecision(2) << s << " " << d * total << endl;
    }

    return 0;
}
