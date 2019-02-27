#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<int> v(20);

    for(int i = 0; i < 20; i++)
        cin >> v[i];
    reverse(v.begin(), v.end());

    for(int i = 0; i < 20; i++)
        cout << "N[" << i << "] = " << v[i] << endl;

    return 0;
}
