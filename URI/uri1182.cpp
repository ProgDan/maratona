#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    char ch;
    cin >> ch;

    double a, sum = 0.0;
    for(int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++){
            cin >> a;
            if(j == n)
                sum += a;
        }

    cout << fixed << setprecision(1) << (ch == 'S'? sum : sum / 12.0) << endl;

    return 0;
}
