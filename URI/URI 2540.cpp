#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while(cin >> N)
    {
        int num, sum = 0;

        for(int i = 0; i < N; i++)
        {
            cin >> num;
            sum += num;
        }

        if(3 * sum >= 2 * N) {cout << "impeachment" << endl;}
        else {cout << "acusacao arquivada" << endl;}
    }

    return 0;
}