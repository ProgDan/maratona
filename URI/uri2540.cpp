#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int n;

    while(cin >> n){
        int limit = ceil((double)(n * 2) / 3), con = 0;
        for(int i = 0, a; i < n; i++){
            cin >> a;
            if(a)
                con++;
        }
        if(con >= limit)
            cout << "impeachment" << endl;
        else
            cout << "acusacao arquivada" << endl;
    }

    return 0;
}
