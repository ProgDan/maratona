#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;

    while(cin >> n){
        if(n == 0)
            break;

        if(n & 1)
            n++;

        int con = 0, sum = 0;
        for(int i = n; con < 5; i += 2)
            sum += i, con++;

        cout << sum << endl;
    }

    return 0;
}
