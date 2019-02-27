#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a, b;

    while(cin >> a >> b){
        if(a == 0 or b == 0)
            break;

        if(a > 0 and b > 0)
            cout << "primeiro" << endl;
        else if(a > 0 and b < 0)
            cout << "quarto" << endl;
        else if(a < 0 and b < 0)
            cout << "terceiro" << endl;
        else
            cout << "segundo" << endl;
    }

    return 0;
}
