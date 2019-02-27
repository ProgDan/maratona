#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;

    while(cin >> n){
        if(n == 0)
            break;

        map<int, string> m;
        string s;
        for(int i = 0, y, t; i < n; i++){
            cin >> s >> y >> t;
            m[y-t] = s;
        }

        cout << m.begin()->second << endl;
    }

    return 0;
}
