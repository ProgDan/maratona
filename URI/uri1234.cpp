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
    int con = 0;
    for(int i = 0; i < s.length(); i++){
        if(!isalpha(s[i]))
            continue;
        if(isalpha(s[i]) and !(con & 1)){
            s[i] = toupper(s[i]);
            con++;
        }
        else if(isalpha(s[i])){
            s[i] = tolower(s[i]);
            con++;
        }
    }

    return s;
}
