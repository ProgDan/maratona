#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    cin.ignore();

    for(int i = 0; i < T; i++){
        string s;
        cin >> s;

        cout << fixed << setprecision(2) << (s.length()) / 100.00 << endl;
    }

    return 0;
}
