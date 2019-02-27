#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0, a, b; i < T; i++){
        cin >> a >> b;

        cout << fixed << setprecision(1);
        if(b == 0)
            cout << "divisao impossivel" << endl;
        else
            cout << (double)a / b << endl;
    }

    return 0;
}
