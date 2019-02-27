#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    string s;
    set<string> st;
    while(getline(cin, s)){
        for(int i = 0; i < s.length(); i++){
            if(isalpha(s[i]))
                s[i] = tolower(s[i]);
            else
                s[i] = ' ';
        }
        stringstream ss(s);
        string c;
        while(ss >> c)
            st.insert(c);
    }
    set<string>::iterator it;
    for(it = st.begin(); it != st.end(); it++)
        cout << *(it) << endl;

    return 0;
}
