#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    vector<int> v;
    for(int i = 0; i < 10; i++){
        v.push_back(n);
        n += n;
    }

    for(int i = 0; i < 10; i++)
        cout << "N[" << i << "] = " << v[i] << endl;

    return 0;

}
