#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

void convert(vector<string> v)
{
    int mx = 0;
    for(int i = 0; i < v.size(); i++)
        if(v[i].length() > mx)
            mx = v[i].length();

    for(int i = 0; i < v.size(); i++){
        reverse(v[i].begin(), v[i].end());

        for(int j = v[i].length(); j < mx; j++)
            v[i] += " ";

        reverse(v[i].begin(), v[i].end());
        cout << v[i] << endl;
    }
}

int main(void)
{
    int T;
    bool f = false;
    while(cin >> T){
        if(T == 0)
            break;

        cin.ignore();

        vector<string> v(T);
        for(int i = 0; i < T; i++)
            cin >> v[i];

        if(f)
            cout << endl;
        convert(v);
        f = true;
    }

    return 0;
}
