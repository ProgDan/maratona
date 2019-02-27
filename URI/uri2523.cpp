#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    string s;
    int n;

    while(cin >> s){
        cin >> n;
        string r;

        for(int i = 0, a; i < n; i++){
            cin >> a;
            r += s[a - 1];
        }

        cout << r << endl;
    }

    return 0;
}
