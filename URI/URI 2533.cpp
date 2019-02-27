#include <bits/stdc++.h>
using namespace std;

int main()
{
    int M;
    double API, sum_C, GP;

    while(cin >> M)
    {
        GP = 0;
        sum_C = 0;

        double N, C;

        while(M--)
        {
            cin >> N >> C;

            GP += (N * C) / 100.0;
            sum_C += C;
        }

        API = GP / sum_C;

        cout << fixed << setprecision(4) << API << endl;
    }

    return 0;
}