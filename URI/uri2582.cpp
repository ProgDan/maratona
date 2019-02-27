#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    string v[] = {"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!", "CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"};

    for(int i = 0, a, b; i < T; i++){
        cin >> a >> b;

        cout << v[a + b] << endl;
    }

    return 0;
}
