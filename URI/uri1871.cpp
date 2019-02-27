#include <bits/stdc++.h>
using namespace std;

string sum(string a, string b);

int main(void)
{
    string a, b;

    while(cin >> a >> b){
        if(a == "0" and b == "0")
            break;
        cout << sum(a, b) << endl;
    }

    return 0;
}

string sum(string a, string b)
{
    string s;
    if(a.length() < b.length())
        swap(a, b);

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    for(int i = b.length(); i < a.length(); i++)
        b += "0";

    int c = 0;
    for(int i = 0; i < a.length(); i++){
        int add = (a[i] - '0') + (b[i] - '0') + c;
        c = add / 10;
        if(add % 10)
            s += (add % 10) + '0';
    }
    if(c > 0)
        s += (c % 10) + '0';

    reverse(s.begin(), s.end());

    return s;
}
