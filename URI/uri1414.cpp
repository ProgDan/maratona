#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, t;

    while(cin >> t >> n){
        if(n == 0 and t == 0)
            break;

        string s;
        int sum = 0;
        for(int i = 0, p; i < t; i++){
            cin >> s >> p;
            sum += p;
        }

        cout << abs(sum - n * 3) << endl;
    }

    return 0;
}
