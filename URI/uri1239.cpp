#include <bits/stdc++.h>
using namespace std;

string convert(string s);

int main(void)
{
    string s;

    while(getline(cin, s)){
        cout << convert(s) << endl;
    }

    return 0;
}

string convert(string s)
{
    int a = 1, b = 1;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '_'){
            s.erase(s.begin() + i, s.begin() + i + 1);
            if(b == 1){
                s.insert(i, "<i>");
                b = 2;
            }
            else{
                s.insert(i, "</i>");
                b = 1;
            }
        }
        if(s[i] == '*'){
            s.erase(s.begin() + i, s.begin() + i + 1);
            if(a == 1){
                s.insert(i, "<b>");
                a = 2;
            }
            else{
                s.insert(i, "</b>");
                a = 1;
            }
        }
    }

    return s;
}
