#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int odd = 0, even = 0, pos = 0, neg = 0;
    for(int i = 0, n; i < 5; i++){
        cin >> n;

        if(n & 1)
            odd++;
        if(!(n & 1))
            even++;
        if(n > 0)
            pos++;
        if(n < 0)
            neg++;
    }
    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;

    return 0;
}
