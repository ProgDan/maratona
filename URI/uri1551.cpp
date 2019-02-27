#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    cin.ignore();

    for(int i = 0; i < T; i++){
        string s;
        getline(cin, s);

        bool a[26] = {0};
        for(int j = 0; j < s.length(); j++){
            if(isalpha(s[j]))
                a[s[j] - 'a'] = 1;
        }

        int con = 0;
        for(int j = 0; j < 26; j++)
            if(a[j])
                con++;

        if(con == 26)
            cout << "frase completa" << endl;
        else if(con >= 13)
            cout << "frase quase completa" << endl;
        else
            cout << "frase mal elaborada" << endl;
    }

    return 0;
}
