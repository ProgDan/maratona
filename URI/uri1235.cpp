#include <bits/stdc++.h>
using namespace std;

void divide(string s);

int main(void)
{
    int T;
    cin >> T;
    cin.ignore();

    for(int i = 0; i < T; i++){
        string s;
        getline(cin, s);

        divide(s);
    }

    return 0;
}

void divide(string s)
{
    int len = s.length();

    string left, right;
    for(int i = 0; i < len / 2; i++)
        left += s[i];

    for(int i = len / 2; i < len; i++)
        right += s[i];

    reverse(left.begin(), left.end());
    reverse(right.begin(), right.end());

    cout << left + right << endl;
}
