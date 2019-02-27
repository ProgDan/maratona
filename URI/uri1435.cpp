#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int n;

    while(cin >> n){
        if(n == 0)
            break;

        int m;
        if(n & 1)
            m = n / 2 + 1;
        else
            m = n / 2;

        vector<vector<int> > v(n, vector<int> (n));
        int val = 1, s = 0, l = n;
        for(int i = 1; i <= m; i++){
            for(int j = s; j < l; j++){
                for(int k = s; k < l; k++){
                    v[j][k] = val;
                }
            }
            val++;
            s++, l--;
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(!j)
                    cout << setw(3) << right << v[i][j];
                else
                    cout << " " << setw(3) << right << v[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
