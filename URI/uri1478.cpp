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

        int a = 1, b = 2;
        bool f = 0;
        vector<vector<int> > v(n, vector<int> (n));
        for(int i = 0; i < n; i++){
            f = 0;
            for(int j = 0; j < n; j++){
                if(i == j)
                    v[i][j] = 1, f = 1, b = 2;
                else{
                    if(f)
                        v[i][j] = b++;
                    else
                        v[i][j] = b--;
                }
            }
            b = ++a;
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j == 0)
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
