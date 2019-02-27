#include <bits/stdc++.h>
using namespace std;

string sub(string a, string b);

int main(void)
{
    string s;

    while(cin >> s){
        if(s == "-1")
            break;

        if(s == "0")
            cout << 0 << endl;
        else
            cout << sub(s, "1") << endl;
    }

    return 0;
}

string sub(string a, string b)
{
    if(a == b)
        return "0";

    string s;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for(int i = b.length(); i < a.length(); i++)
        b += "0";

    for(int i = 0; i < a.length(); i++){
        if(a[i] < b[i]){
            int j = i + 1;
            while(a[j] == '0' and j < a.length()){
                a[j] = '9';
                j++;
            }
            a[j]--;
            a[i] += 10;
        }
        s += ((a[i] - b[i]) % 10) + '0';
    }

    int l = s.length();
    while(s[l - 1] == '0'){
        s.erase(s.end() - 1);
        l--;
    }
    reverse(s.begin(), s.end());

    return s;
}
