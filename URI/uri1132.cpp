#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a, b, sum = 0;
    cin >> a;
    cin >> b;

    if(a > b)
        swap(a, b);

    for(int i = a; i <= b; i++)
        if(i % 13 != 0)
            sum += i;

    cout << sum << endl;

    return 0;
}
