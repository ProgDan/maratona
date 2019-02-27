#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    cin.ignore();

    for(int i = 0; i < T; i++){
        string a, b;
        cin >> a >> b;
        int alen = a.length();
        int blen = b.length();
        int mlen = max(alen, blen);

        string s;
        for(int i = 0; i < mlen; i++){
            if(i < alen)
                s += a[i];
            if(i < blen)
                s += b[i];
        }
        cout << s << endl;
    }

    return 0;
}
