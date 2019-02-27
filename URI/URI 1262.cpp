#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    string s;
    double n;

    while(cin >> s)
    {
        cin >> n;
        int clk = 0;

        for(unsigned i = 0; i < s.size(); i++)
        {
            int x = 0;
            while(s[i] == 'R' && i < s.size())
            {
                x++;
                i++;
            }

            clk = clk + ceil(x / n);

            if(s[i] == 'W') clk++;
        }

        cout << clk << endl;
    }

    return 0;
}
