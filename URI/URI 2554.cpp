#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;

    while(cin >> n >> d)
    {
        string date, ok_date;
        int ans, p;

        while(d--)
        {
            ans = 1;
            cin >> date;
            for(int i = 0; i < n; i++)
            {
                cin >> p;
                ans *= p;
            }

            if (ans == 1 && ok_date == "")
            {
                ok_date = date;
            }
        }
        
        if(ok_date != "")
        {
            cout << ok_date << endl;
        }

        else
        {
            cout << "Pizza antes de FdI" << endl;
        }
    }

    return 0;
}