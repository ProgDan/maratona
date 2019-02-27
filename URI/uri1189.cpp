#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    char ch;
    cin >> ch;

    double a, sum = 0.0;
    int con = 0;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> a;

            if(i > j and j < 11 - i){
                sum += a;
                con++;
            }
        }
    }

    cout << fixed << setprecision(1) << (ch == 'S'? sum : sum / con) << endl;

    return 0;
}
