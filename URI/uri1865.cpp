#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    cin.ignore();

    string s;
    for(int i = 0, a; i < n; i++){
        cin >> s >> a;

        if(s == "Thor")
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }

    return 0;
}
