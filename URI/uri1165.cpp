#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
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

    for(size_t i = 0; i < T; i++){
        int n;
        cin >> n;

        if(prime(n))
            cout << n << " eh primo" << endl;
        else
            cout << n << " nao eh primo" << endl;
    }

    return 0;
}
