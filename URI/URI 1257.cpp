#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int n;
    cin >> n;

    while(n--)
    {
        int L, sum = 0;
        cin >> L;

        for(unsigned i = 0; i < L; i++)
        {
            string str;
            cin >> str;

            for(unsigned j = 0; j < str.size(); j++)
            {
                sum += (str[j] + j + i - 65);
            }
        }
        cout << sum << endl;
    }

    return 0;
}
