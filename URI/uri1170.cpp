#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        double a;
        cin >> a;

        int con = 0;
        while(a > 1){
            con++;
            a /= 2;
        }

        cout << con << " dias" << endl;
    }

    return 0;
}
