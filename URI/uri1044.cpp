#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;

    if(a > b)
        swap(a, b);

    if(!(b % a))
        cout << "Sao Multiplos" << endl;
    else
        cout << "Nao sao Multiplos" << endl;

    return 0;
}
