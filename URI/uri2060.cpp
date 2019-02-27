#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    vector<int> v(4, 0);
    for(int i = 0, a; i < n; i++){
        cin >> a;

        if(!(a % 2))
            v[0]++;
        if(!(a % 3))
            v[1]++;
        if(!(a % 4))
            v[2]++;
        if(!(a % 5))
            v[3]++;
    }

    for(int i = 0; i < 4; i++)
        cout << v[i] << " Multiplo(s) de " << i + 2 << endl;

    return 0;
}
