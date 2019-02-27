#include <bits/stdc++.h>
using namespace std;

#define UP 1
#define DOWN 0

int main()
{
    //freopen("in.txt", "r", stdin);

    string str;

    while(getline(cin, str))
    {
        int ans = 0;
        char prev = tolower(str[0]);
        int flag = DOWN;

        for(unsigned i = 0; i < str.size(); i++)
        {
            if(str[i] == ' ')
            {
                char now = tolower(str[i+1]);

                if (now == prev && flag == DOWN)
                {
                    flag = UP;
                    ans++;
                }

                else if( now != prev)
                {
                    prev = now;
                    flag = DOWN;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
