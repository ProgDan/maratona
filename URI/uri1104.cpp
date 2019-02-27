#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int n, m;

    while(cin >> n >> m){
        if(n == 0 and m == 0)
            break;

        set<int> a;
        for(int i = 0, t; i < n; i++){
            cin >> t;
            a.insert(t);
        }
        set<int> b;
        for(int i = 0, t; i < m ; i++){
            cin >> t;
            b.insert(t);
        }

        int con = 0;
        set<int>::iterator ia, ib;
        vector<int> va;
        for(ia = a.begin(); ia != a.end(); ia++)
            va.push_back(*ia);
        vector<int> vb;
        for(ib = b.begin(); ib != b.end(); ib++)
            vb.push_back(*ib);

        for(int i = 0; i < va.size(); i++){
            for(int j = 0; j < vb.size(); j++){
                if(va[i] == vb[j]){
                    con++;
                    break;
                }
            }
        }
        cout << min(va.size() - con, vb.size() - con) << endl;
    }

    return 0;
}
