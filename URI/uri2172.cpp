#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(void)
{
    ll n;
    int a;

    while(cin >> a >> n){
        if(a == 0 and n == 0)
            break;

        cout << a * n << endl;
    }

    return 0;
}
