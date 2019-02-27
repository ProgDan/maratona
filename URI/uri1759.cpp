#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    string s = "";
    for(int i = 0; i < n; i++){
        s += "Ho";
        if(i < n - 1)
            s += " ";
    }
    s += "!";

    cout << s << endl;

    return 0;
}
