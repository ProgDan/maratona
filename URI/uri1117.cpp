#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    double a, sum = 0.0;

    int con = 0;
    for(int i = 0; con < 2; i++){
        cin >> a;

        if(a >= 0.0 and a <= 10.0){
            sum += a;
            con++;
        }
        else
            cout << "nota invalida" << endl;
    }

    cout << fixed << setprecision(2) << "media = " << sum / 2.0 << endl;

    return 0;
}
