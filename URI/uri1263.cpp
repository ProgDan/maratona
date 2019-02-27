#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    string s;

    while(getline(cin, s)){
        stringstream ss(s);
        string a;
        char c = '-';
        int con = 0, temp = 0;
        while(ss >> a){
            char ch = tolower(a[0]);

            if(ch == c)
                temp++;
            else{
                c = ch;
                if(temp)
                    con++;
                temp = 0;
            }
        }
        if(temp)
            con++;

        cout << con << endl;
    }

    return 0;
}
