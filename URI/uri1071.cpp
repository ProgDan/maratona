#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a, b;
    cin >> a;
    cin >> b;

    if(a > b)
        swap(a, b);

    int sum = 0;
    for(int i = ++a; i < b; i++)
        if(i & 1)
            sum += i;

    cout << sum << endl;

    return 0;
}
