#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a, b;
    cin >> a;

    while(cin >> b)
        if(b > 0)
            break;

    int sum = 0;
    for(int i = a; i < a + b; i++)
        sum += i;

    cout << sum << endl;

    return 0;
}
