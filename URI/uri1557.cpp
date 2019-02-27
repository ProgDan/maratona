#include <bits/stdc++.h>
typedef long long int ll;
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int n;

    while(cin >> n){
        if(n == 0)
            break;

        vector<vector<int> > v(n, vector<int> (n));
        int a = 1, b = 1, last;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == n - 1 and j == n - 1)
                    last = b;
                v[i][j] = b;
                b *= 2;
            }
            a *= 2;
            b = a;
        }

        string wd;
        ostringstream ss;
        ss << last;
        wd = ss.str();
        int len = wd.length();

        for(int i = 0; i  < n; i++){
            for(int j = 0; j < n; j++){
                if(!j)
                    cout << setw(len) << right << v[i][j];
                else
                    cout << " " << setw(len) << right << v[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
