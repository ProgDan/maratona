#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<int> v;

    for(int i = 0, a; i < 10; i++){
        cin >> a;
        if(a <= 0)
            v.push_back(1);
        else
            v.push_back(a);
    }

    for(int i = 0; i < 10; i++)
        cout << "X[" << i << "] = " << v[i] << endl;

    return 0;
}
