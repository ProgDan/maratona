#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int out(string s);

int main(void)
{
    int T;

    while(cin >> T){
        if(T == 0)
            break;

        string s;
        int sum = 0;
        for(int i = 0, a; i < T; i++){
            cin >> a;
            cin.ignore();
            getline(cin, s);

            sum += (a * out(s));
        }
        if(sum < 110)
            cout << "Mais " << 110 - sum;
        else if(sum >= 110 and sum <= 130)
            cout << sum;
        else
            cout << "Menos " << sum - 130;
        cout << " mg" << endl;
    }

    return 0;
}

int out(string s)
{
    if(s == "suco de laranja")
        return 120;
    else if(s == "morango fresco")
        return 85;
    else if(s == "mamao")
        return 85;
    else if(s == "goiaba vermelha")
        return 70;
    else if(s == "manga")
        return 56;
    else if(s == "laranja")
        return 50;
    else if(s == "brocolis")
        return 34;
}
