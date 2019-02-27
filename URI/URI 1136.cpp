#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b;

    while( cin >> n >> b and (n or b))
    {
        vector<int> v;
        set<int> s;

        while(b--)
        {
                int x;
                cin >> x;
                v.push_back(x);
        }

        for(int i : v)
        {
            for(int j : v)
            {
                s.insert(abs(i - j));
            }
        }

        if(s.size() == n+1) cout << "Y" << endl;

        else cout << "N" << endl;
    }

    return 0;
}
