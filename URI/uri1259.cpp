#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> even;
    vector<int> odd;

    for(int i = 0, a; i < n; i++){
        cin >> a;

        if(a & 1)
            odd.pb(a);
        else
            even.pb(a);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end(), greater<int>());

    for(int i = 0; i < even.size(); i++)
        cout << even[i] << endl;
    for(int i = 0; i < odd.size(); i++)
        cout << odd[i] << endl;

    return 0;
}
