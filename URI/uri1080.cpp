#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<int>v(100);
    int pos = 0, mx = -1;
    for(int i = 0; i < 100; i++){
        cin >> v[i];

        if(mx < v[i]){
            pos = i + 1;
            mx = v[i];
        }
    }

    cout << mx << endl;
    cout << pos << endl;

    return 0;
}
