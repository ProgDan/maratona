#include <bits/stdc++.h>
using namespace std;

bool check(int n)
{
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return 0;
    return 1;
}

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        int n;
        cin >> n;

        if(check(n))
            cout << "Prime" << endl;
        else
            cout << "Not Prime" << endl;
    }

    return 0;
}
