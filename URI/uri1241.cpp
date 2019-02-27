#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    cin.ignore();

    for(int i = 0; i < T; i++){
        string a, b;
        cin >> a >> b;

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        bool c = 1;
        for(int i = 0; i < b.length(); i++)
            if(b[i] != a[i])
                c = 0;

        if(c)
            cout << "encaixa" << endl;
        else
            cout << "nao encaixa" << endl;
    }

    return 0;
}
