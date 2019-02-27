#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

vector<ll> v;

void fib();

int main(void)
{
    fib();
    int T;
    cin >> T;

    for(int i = 0, n; i < T; i++){
        cin >> n;

        cout << "Fib(" << n << ") = " << v[n] << endl;
    }

    return 0;
}

void fib()
{
    v.push_back(0);
    v.push_back(1);

    for(int i = 2; i <= 60; i++)
        v.push_back(v[i - 1] + v[i - 2]);
}
