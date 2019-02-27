#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    string s;
    getline(cin, s);

    if(s.length() <= 140)
        cout << "TWEET" << endl;
    else
        cout << "MUTE" << endl;

    return 0;
}
