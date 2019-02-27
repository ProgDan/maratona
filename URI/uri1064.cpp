#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    double n, sum = 0.0;
    int con = 0;
    for(int i = 0; i < 6; i++){
        cin >> n;

        if(n > 0.0){
            sum += n;
            con++;
        }
    }
    cout << con << " valores positivos" << endl;
    cout << fixed << setprecision(1) << sum / con << endl;

    return 0;
}
