#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string a, b;

    while(cin >> a >> b){
        if(a == "0" and b == "0")
            break;

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        if(a.length() < b.length())
            swap(a, b);
        for(int i = b.length(); i < a.length(); i++)
            b += "0";

        int con = 0, c = 0;
        for(int i = 0; i < a.length(); i++){
            int add = (a[i] - '0') + (b[i] - '0') + c;
            c = add / 10;
            if(add > 9)
                con++;
        }

        if(!con)
            cout << "No carry operation." << endl;
        else if(con == 1)
            cout << 1 << " carry operation." << endl;
        else
            cout << con << " carry operations." << endl;
    }

    return 0;
}
