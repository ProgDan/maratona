#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    cin.ignore();

    string a, b;
    for(int i = 0; i < T; i++){
        cin >> a;
        cin >> b;

        if(a == "ataque"){
            if(b == "ataque")
                cout << "Aniquilacao mutua" << endl;
            else if(b == "pedra")
                cout << "Jogador 1 venceu" << endl;
            else
                cout << "Jogador 1 venceu" << endl;
        }
        else if(a == "pedra"){
            if(b == "ataque")
                cout << "Jogador 2 venceu" << endl;
            else if(b == "pedra")
                cout << "Sem ganhador" << endl;
            else
                cout << "Jogador 1 venceu" << endl;
        }
        else{
            if(b == "ataque")
                cout << "Jogador 2 venceu" << endl;
            else if(b == "pedra")
                cout << "Jogador 2 venceu" << endl;
            else
                cout << "Ambos venceram" << endl;
        }
    }

    return 0;
}
