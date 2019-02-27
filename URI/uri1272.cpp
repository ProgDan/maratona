#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

string convert(string s);

int main(void)
{
    int T;
    cin >> T;
    cin.ignore();

    for(int i = 0; i < T; i++){
        string s;
        getline(cin, s);

        cout << convert(s) << endl;
    }

    return 0;
}

string convert(string s)
{
    string a = "";

    for(int i = 0; i < s.length(); i++){
        if(i == 0 and s[i] != ' '){
            a += s[0];
        }
        else if(s[i] == ' '){
            while(s[i] == ' ') i++;
            if(s[i] != '\0')
                a += s[i];
        }
    }

    return a;
}
