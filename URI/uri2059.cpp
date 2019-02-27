#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a, b, c, d, e;
    bool r = 0;
    cin >> a >> b >> c >> d >> e;
    int sum = b + c;

    if((a and !(sum & 1)) or (!a and (sum & 1)))
        r = 1;
    else
        r = 0;

    if((d and !e) or (!d and e))
        r = 1;
    else if(d and e)
        r = 0;

    if(r)
        cout << "Jogador 1 ganha!" << endl;
    else
        cout << "Jogador 2 ganha!" << endl;

    return 0;
}
