#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    cout << fixed << setprecision(1);
    double a = (1 + sqrt(5)) / 2, b = (1 - sqrt(5)) / 2;
    cout << (pow(a, n) - pow(b, n)) / sqrt(5) << endl;

    return 0;
}
