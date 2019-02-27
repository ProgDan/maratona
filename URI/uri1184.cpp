#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    char ch;
    cin >> ch;

    int con = 0;
    double a, sum = 0.0;
    for(int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++){
            cin >> a;
            if(i > j)
                sum += a, con++;
        }

    cout << fixed << setprecision(1) << (ch == 'S'? sum : sum / con) << endl;

    return 0;
}
