#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0, a, b; i < T; i++){
        cin >> a >> b;

        int sum = 0, con = 0;
        for(int j = a; con < b; j++){
            if(j & 1){
                sum += j;
                con++;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
