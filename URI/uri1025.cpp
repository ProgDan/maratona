#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int check(int a, vector<int>b);

int main(void)
{
    int n, q;
    int tc = 1;

    while(cin >> n >> q){
        if(!n && !q)
            break;
        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());

        cout << "CASE# " << tc++ << ":" << endl;
        for(int i = 0, c; i < q; i++){
            cin >> c;

            if(!check(c, a))
                cout << c << " not found" << endl;
            else
                cout << c << " found at " << check(c, a) << endl;
        }
    }

    return 0;
}

int check(int a, vector<int>b)
{
    for(int i = 0; i < b.size(); i++){
        if(b[i] == a)
            return i + 1;
    }
    return 0;
}
