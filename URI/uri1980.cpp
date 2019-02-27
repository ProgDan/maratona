#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

ll fact(int n);

int main(void)
{
    string s;

    while(cin >> s){
        if(s == "0")
            break;

        cout << fact(s.length()) << endl;
    }

    return 0;
}

ll fact(int n)
{
    if(n == 0)
        return 1;
    return n * fact(n - 1);
}
