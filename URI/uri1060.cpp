#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    double d;
    int con = 0;
    for(int i = 0; i < 6; i++){
        cin >> d;
        if(d > 0)
            con++;
    }
    cout << con << " valores positivos" << endl;

    return 0;
}
