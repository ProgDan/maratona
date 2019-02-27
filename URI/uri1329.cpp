#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;

    while(cin >> n){
        if(n == 0)
            break;

        int zero = 0, one = 0;
        for(int i = 0, a; i < n; i++){
            cin >> a;
            if(a == 0)
                zero++;
            else
                one++;
        }

        cout << "Mary won " << zero << " times and John won " << one << " times" << endl;
    }

    return 0;
}
