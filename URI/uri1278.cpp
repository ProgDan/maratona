#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

void result(vector<string> v, int mx);

int main(void)
{
    int T;
    bool f = false;

    while(cin >> T){
        if(T == 0)
            break;
        cin.ignore();

        vector<string> v;
        string s;
        int mx = 0;
        for(int i = 0; i < T; i++){
            getline(cin, s);
            stringstream ss(s);
            string a, b;
            while(ss >> a){
                b += a;
                b += " ";
            }
            b.erase(b.end() - 1);
            int len = b.length();
            if(mx < len)
                mx = len;
            v.push_back(b);
        }
        if(f)
            cout << endl;
        result(v, mx);
        f = true;
    }

    return 0;
}

void result(vector<string> v, int mx)
{
    for(int i = 0; i < v.size(); i++){
        reverse(v[i].begin(), v[i].end());

        for(int j = v[i].length(); j < mx; j++)
            v[i] += " ";

        reverse(v[i].begin(), v[i].end());

        cout << v[i] << endl;
    }
}
