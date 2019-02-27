#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

string convert(string s);

int main(void)
{
    string s;

    while(getline(cin, s)){
        cout << convert(s) << endl;
    }

    return 0;
}

string convert(string s)
{
    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                int a = (int)(s[i] - 65);
                if(a / 13 < 1)
                    s[i] = (char)s[i] + 13;
                else{

                    int b = 91 - (65 + a);
                    s[i] = 'A' + (13 - b);
                }
            }
            else if(s[i] >= 'a' && s[i] <= 'z'){
                int a = (int)(s[i] - 97);
                if(a / 13 < 1)
                    s[i] = s[i] + 13;
                else{
                    int b = 123 - (97 + a);
                    s[i] = 'a' + (13 - b);
                }
            }
        }
    }

    return s;
}
