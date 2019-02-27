#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    long int n, con = 0;
    for(int i = 0; i < T; i++){
        cin >> n;

        if(n >= 10 and n <= 20)
            con++;
    }

    cout << con << " in" << endl;
    cout << T - con << " out" << endl;

    return 0;
}
