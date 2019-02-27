#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    if(n & 1)
        for(int i = n; i < n + 12; i += 2)
            cout << i << endl;
    else
        for(int i = n + 1; i < n + 13; i += 2)
            cout << i << endl;

    return 0;
}
