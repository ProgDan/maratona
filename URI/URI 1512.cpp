#include <bits/stdc++.h>
using namespace std;

unsigned long long GCD(unsigned long long A, unsigned long long B)
{
    unsigned long long X = max(A, B);
    unsigned long long Y = min(A, B);

    if (X % Y == 0) return Y;
    return GCD(Y, X%Y);
}

unsigned long long LCM(unsigned long long A, unsigned long long B)
{
    return (A * B) / GCD(A, B);
}


int main()
{
    unsigned long long N, A, B;

    while(cin >> N >> A >> B && N && A && B)
    {
        cout << (N / A) + (N / B) - (N / LCM(A, B)) << endl;
    }

    return 0;
}