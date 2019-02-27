#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    if(a.first.length() != b.first.length()) return a.first.length() > b.first.length();
    return a.second < b.second;
}

int main(void)
{
    int T;
    cin >> T;
    cin.ignore();

    string s;
    for(int i = 0; i < T; i++){
        getline(cin, s);

        stringstream ss(s);
        string a;
        vector<pair<string, int> >v;
        int pos = 0;
        while(ss >> a){
            v.push_back(make_pair(a, pos));
            pos++;
        }
        sort(v.begin(), v.end(), cmp);

        for(int j = 0; j < v.size(); j++){
            cout << v[j].first;
            if(j < v.size() - 1)
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}
