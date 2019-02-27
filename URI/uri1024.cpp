#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++){
        string s;
        getline(cin, s);
        for(int j = 0; j < s.length(); j++)
            if(isalpha(s[j]))
                s[j] += 3;
        reverse(s.begin(), s.end());

        int mid = (s.length()) / 2;
        for(int j = mid; j < s.length(); j++)
            s[j] -= 1;

        cout << s << endl;
    }

    return 0;
}
