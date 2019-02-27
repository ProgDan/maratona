#include <bits/stdc++.h>
using namespace std;

int fib();

vector<int> fibv;

int main(void)
{
    fib();

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << fibv[i];
        if(i < n - 1)
            cout << " ";
    }
    cout << endl;

    return 0;
}

int fib()
{
    fibv.push_back(0);
    fibv.push_back(1);

    for(int i = 2; i < 46; i++)
        fibv.push_back(fibv[i - 1] + fibv[i - 2]);
}
