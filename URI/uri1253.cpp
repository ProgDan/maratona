#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

string convert(string s, int n);

int main(void)
{
    int T;
    cin >> T;
    cin.ignore();

    for(int i = 0, a; i < T; i++){
        string s;
        cin >> s;
        cin >> a;

        cout << convert(s, a) << endl;
    }

    return 0;
}

string convert(string s, int n)
{
    if(n == 0)
        return s;

    for(int i = 0; i < s.length(); i++){
        s[i] = (s[i] - n < 65? (26 + s[i] - n): s[i] - n);
    }

    return s;
}
