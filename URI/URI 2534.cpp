#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;

    while(cin >> N >> Q)
    {
        int num, pos;

        vector<int> v;

        for(int i = 0; i < N; i++)
        {
            cin >> num;
            v.push_back(num);
        }

        sort(v.begin(), v.end());


        while(Q--)
        {
            cin >> pos;
            cout << v[N - pos] << endl;
        }
    }

    return 0;
}