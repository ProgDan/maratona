#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main(void)
{
    vector<string> v;
    v.pb("January");
    v.pb("February");
    v.pb("March");
    v.pb("April");
    v.pb("May");
    v.pb("June");
    v.pb("July");
    v.pb("August");
    v.pb("September");
    v.pb("October");
    v.pb("November");
    v.pb("December");

    int n;
    cin >> n;

    cout << v[n - 1] << endl;

    return 0;
}
