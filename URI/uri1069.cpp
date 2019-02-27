#include <bits/stdc++.h>
using namespace std;

int check(string s);

int main(void)
{
    int T;
    cin >> T;
    cin.ignore();

    for(int i = 0; i < T; i++){
        string s;
        cin >> s;

        cout << check(s) << endl;
    }

    return 0;
}

int check(string s)
{
    stack<char> S;
    int con = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '<')
            S.push(s[i]);
        else if(s[i] == '>'){
            if(!S.empty()){
                S.pop();
                con++;
            }
        }
    }

    return con;
}
