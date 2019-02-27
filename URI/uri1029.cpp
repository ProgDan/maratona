#include <bits/stdc++.h>
using namespace std;

int con;
int fib(int a);

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0, n; i < T; i++){
        cin >> n;
        con = 0;
        cout << "fib(" << n << ") = " << con - 1 << " calls = " << fib(n) << endl;
    }

    return 0;
}

int fib(int n)
{
    con++;
    if(n == 0 || n == 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
