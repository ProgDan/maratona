#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    int pos = 0;
    for(int i = 0; i < n - 1; i++){
        if(v[i] > v[i + 1]){
            pos = i + 1 + 1; //one for position
            break;
        }
    }

    cout << pos << endl;

    return 0;
}
