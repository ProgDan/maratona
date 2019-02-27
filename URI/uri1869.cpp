#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
typedef unsigned long long int ll;
using namespace std;

string base(ll n);

int main(void)
{
    ll n;

    while(cin >> n){
        if(n == 0){
            cout << 0 << endl;
            break;
        }
        cout << base(n) << endl;
    }

    return 0;
}

string base(ll n)
{
    string s = "";
    while(n){
        int ex = n % 32;
        if(ex >= 0 and ex <= 9)
            s += ex + '0';
        else
            s += 'A' + ex - 10;
        n /= 32;
    }
    reverse(s.begin(), s.end());

    return s;
}
