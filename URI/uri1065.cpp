#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int con = 0;
    for(int i = 0, n; i < 5; i++){
        cin >> n;

        if(!(n & 1))
            con++;
    }
    cout << con << " valores pares" << endl;

    return 0;
}
