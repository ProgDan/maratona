#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int sum(ll a);

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        ll a;
        cin >> a;

        if(sum(a) == a)
            cout  << a << " eh perfeito" << endl;
        else
            cout << a << " nao eh perfeito" << endl;
    }

    return 0;
}

int sum(ll a)
{
    int s = 0;
    for(int i = 1; i < a; i++)
        if(a % i == 0)
            s += i;

    return s;
}
