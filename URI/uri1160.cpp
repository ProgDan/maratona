#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0, a, b; i < T; i++){
        double c, d;
        cin >> a >> b >> c >> d;

        int con = 0;
        while(a <= b and con <= 100){
            con++;
            a += (a * (c / 100));
            b += (b * (d / 100));
        }
        if(con > 100)
            cout << "Mais de 1 seculo." << endl;
        else
            cout << con << " anos." << endl;
    }

    return 0;
}
