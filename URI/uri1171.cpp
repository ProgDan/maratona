#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    map<int, int> m;
    for(int i = 0, a; i < n; i++){
        cin >> a;
        if(m.count(a) == 0)
            m[a] = 1;
        else
            m[a]++;
    }

    map<int, int>::iterator it;
    for(it = m.begin(); it != m.end(); it++)
        cout << it->first << " aparece " << it->second << " vez(es)" << endl;

    return 0;
}
