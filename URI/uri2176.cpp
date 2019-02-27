#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string s;
    cin >> s;

    int con = 0;
    for(int i = 0; i < s.length(); i++)
        if(s[i] - '0')
            con++;

    if(con & 1)
        s += "1";
    else
        s += "0";

    cout << s << endl;

    return 0;
}
