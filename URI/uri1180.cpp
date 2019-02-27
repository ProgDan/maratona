#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int pos = 0, mn = 1000000;
    for(int i = 0, a; i < n; i++){
        cin >> a;

        if(a < mn){
            mn = a;
            pos = i;
        }
    }

    cout << "Menor valor: " << mn << endl;
    cout << "Posicao: " << pos << endl;

    return 0;
}
