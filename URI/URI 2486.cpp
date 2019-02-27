#include <bits/stdc++.h>
using namespace std;

int main()
{
    int  T;

    while(cin >> T && T)
    {
        int n, wt, sum = 0;
        string name;

        while(T--)
        {
            cin >> n;
            getchar();

            getline(cin, name);

            if(name == "suco de laranja")
                wt = 120;
            else if (name == "morango fresco")
                wt = 85;
            else if (name == "mamao")
                wt = 85;
            else if (name == "goiaba vermelha")
                wt = 70;
            else if (name == "manga")
                wt = 56;
            else if (name == "laranja")
                wt = 50;
            else if (name == "brocolis")
                wt = 34;

            sum += wt * n;
        }

        if(sum >= 110 && sum <= 130)
            cout << sum << " mg" << endl;

        else if (sum < 110)
            cout << "Mais " << 110 - sum << " mg" << endl;

        else if (sum > 130)
            cout << "Menos " << sum - 130 << " mg" << endl;
    }

    return 0;
}
