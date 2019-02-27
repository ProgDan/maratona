#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int n, l, c;

    while(cin >> n >> l >> c){
        string s;
        int len = 0, con = 1;

        for(int i = 0; i < n; i++){
            cin >> s;

            if(len + s.length() <= c)
                len += s.length() + 1;
            else{
                len = s.length() + 1;
                con++;
            }
        }

        if(con % l)
            cout << con / l + 1 << endl;
        else
            cout << con / l << endl;
    }

    return 0;
}
