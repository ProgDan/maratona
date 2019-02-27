#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int n;
    string s;

    while(cin >> n >> s){
        if(n == 0 && s == "0")
            break;

        for(int i = 0; i < s.length(); i++){
            if(n == s[i] - '0'){
                s.erase(s.begin() + i, s.begin() + i + 1);
                i--;
            }

        }
        reverse(s.begin(), s.end());
        int l = s.length() - 1;
        while(s[l] == '0'){
            s.erase(s.end() - 1);
            l--;
        }
        reverse(s.begin(), s.end());

        if(s.empty())
            cout << "0" << endl;
        else
            cout << s << endl;
    }

    return 0;
}
