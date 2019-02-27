#include <bits/stdc++.h>
typedef long long int ll;
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    cin.ignore();

    string a, b, c, d;
    for(int i = 0, n, m; i < T; i++){
        cin >> a >> b >> c >> d;
        cin >> n >> m;
        ll sum = n + m;

        if(!(sum & 1)){
            if(b == "PAR")
                cout << a << endl;
            else
                cout << c << endl;
        }
        else{
            if(b == "IMPAR")
                cout << a << endl;
            else
                cout << c << endl;
        }
    }

    return 0;
}
