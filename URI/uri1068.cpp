#include <bits/stdc++.h>
using namespace std;

bool check(string s);

int main(void)
{
    string s;

    while(cin >> s){
        if(check(s))
            cout << "correct" << endl;
        else
            cout << "incorrect" << endl;
    }

    return 0;
}

bool check(string s)
{
    stack<char>S;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(')
            S.push(s[i]);
        else if(s[i] == ')'){
            if(S.empty())
                return 0;
            S.pop();
        }
    }

    return (S.empty()? 1 : 0);
}
