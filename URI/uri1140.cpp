#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    string s;

    while(getline(cin, s)){
        if(s == "*")
            break;

        stringstream ss(s);
        string a;
        int con = 0;
        vector<char> v;
        while(ss >> a){
            con++;
            v.push_back(a[0]);
        }

        char f = tolower(v[0]);
        int b = 1;
        for(int i = 1; i < v.size(); i++)
            if(f == tolower(v[i]))
                b++;

        if(b == con)
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }

    return 0;
}
