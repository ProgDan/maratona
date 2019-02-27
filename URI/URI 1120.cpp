#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);

    char missingDigit;
    string original;

    while(cin >> missingDigit >> original)
    {
        stringstream printed;
        bool flag = 0;

        if(missingDigit == '0' && original == "0") return 0;

        for(char ch : original)
        {
            if(ch != missingDigit && ch != '0') flag = 1;

            if(ch != missingDigit && flag == 1)
            {
                printed << ch;
            }
        }

        string res = printed.str();

        if(res == "") cout << "0" << endl;
        else cout << res << endl;
    }
}