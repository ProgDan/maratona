#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    int al = 0, gas = 0, dis = 0;
    while(cin >> n){
        if(n == 4)
            break;
        switch(n)
        {
            case 1:
                al++;
                break;
            case 2:
                gas++;
                break;
            case 3:
                dis++;
                break;
        }
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << al << endl;
    cout << "Gasolina: " << gas << endl;
    cout << "Diesel: " << dis << endl;

    return 0;
}
