#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int n, m;

    while(cin >> n >> m){
        vector<int> v(n);

        for(int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end(), greater<int>());

        for(int i = 0, a; i < m; i++){
            cin >> a;
            cout << v[a - 1] << endl;
        }
    }

    return 0;
}
