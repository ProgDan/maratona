#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;

    if((a > b and b <= c) or (a < b and b < c and c - b >= b - a) or (a > b and b > c and b - c < a - b) or (a == b and b < c))
        cout << ":)" << endl;
    else
        cout << ":(" << endl;

    return 0;
}
