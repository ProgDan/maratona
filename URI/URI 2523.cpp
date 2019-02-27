
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    while(cin >> str)
    {
        int len, i;
        cin >> len;
        while(len--)
        {
            cin >> i;
            cout << str[i-1];
        }
        cout << endl;
    }

    return 0;
}