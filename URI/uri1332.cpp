#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    cin.ignore();

    for(int i = 0; i < T; i++){
        string s;
        cin >> s;

        if(s.length() == 5)
            cout << 3 << endl;
        else if((s[0] == 'o' and s[1] == 'n') or (s[1] == 'n' and s[2] == 'e') or (s[0] == 'o' and s[2] == 'e'))
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }

    return 0;
}
