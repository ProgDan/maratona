#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0, a, b; i < T; i++){
        cin >> a >> b;
        if(a > b)
            swap(a, b);
        int sum = 0;
        for(int i = ++a; i < b; i++)
            if(i & 1)
                sum += i;

        cout << sum << endl;
    }

    return 0;
}
