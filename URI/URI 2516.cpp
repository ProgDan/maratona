#include <bits/stdc++.h>
using namespace std;

int main()
{
    double S, v_a, v_b;

    while(cin >> S >> v_a >> v_b)
    {
        if(v_a <= v_b ) {cout << "impossivel" << endl;}

        else
        {
            cout << fixed << setprecision(2) << S / (v_a - v_b) << endl;
        }
    }

    return 0;
}