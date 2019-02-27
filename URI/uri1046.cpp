#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;

    cout << "O JOGO DUROU " << (a > b or a == b ? b += 24 - a : b - a) << " HORA(S)" << endl;

    return 0;
}
