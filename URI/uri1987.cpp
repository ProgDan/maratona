#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int sum(string s);

int main(void)
{
    int n;
    string s;

    while(cin >> n >> s){
        if(sum(s) % 3)
            cout << sum(s) << " nao" << endl;
        else
            cout << sum(s) << " sim" << endl;
    }

    return 0;
}

int sum(string s)
{
    int sum = 0;
    for(int i = 0; i < s.length(); i++)
        sum += (s[i] - '0');

    return sum;
}
