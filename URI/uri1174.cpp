#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<double> v(100);

    for(int i = 0; i < 100; i++)
        cin >> v[i];

    for(int i = 0; i < 100; i++)
        if(v[i] <= 10.0)
            cout << fixed << setprecision(1) << "A[" << i << "] = " << v[i] << endl;

    return 0;
}
