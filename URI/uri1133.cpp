#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a, b;
    cin >> a;
    cin >> b;
    if(a > b)
        swap(a, b);

    for(int i = ++a; i < b; i++)
        if(i % 5 == 2 or i % 5 == 3)
            cout << i << endl;

    return 0;
}
