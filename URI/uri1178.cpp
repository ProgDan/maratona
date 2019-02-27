#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    double a;
    cin >> a;

    vector<double> v;
    for(int i = 0; i < 100; i++){
        v.push_back(a);
        a /= 2;
    }

    for(int i = 0; i < 100; i++)
        cout << fixed << setprecision(4) << "N[" << i << "] = " << v[i] << endl;

    return 0;
}
