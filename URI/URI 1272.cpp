#include <bits/stdc++.h>
using namespace std;


int main()
{
    //freopen("in.txt", "r", stdin);

    int n;
    cin >> n;

    string str;
    cin.ignore();

    while(n--)
    {
        getline(cin, str);

        if(str == ""){break;}

        if(isalpha(str[0])) cout << str[0];

        for(unsigned i = 0; i < str.size()-1; i++)
        {
            if(str[i] == ' ' && isalpha(str[i+1]))
            {
                cout << str[i+1];
            }
        }

        cout << endl;
    }

    return 0;
}
