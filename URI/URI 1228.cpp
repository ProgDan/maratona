
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0;

    while(cin >> n)
    {
        ans = 0;
        int begin[n], end[n];

        for(int i = 0; i < n; i++) cin >> begin[i];
        for(int i = 0; i < n; i++) cin >> end[i];

        int res[n];

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(begin[i] == end[j])
                    res[j] = i;
            }
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(res[i] > res[j])
                {
                    swap(res[i], res[j]);
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }
}
