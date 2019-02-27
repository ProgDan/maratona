#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string s;

    while(cin >> s){
        if(s == "2002"){
            cout << "Acesso Permitido" << endl;
            break;
        }
        else
            cout << "Senha Invalida" << endl;
    }

    return 0;
}
