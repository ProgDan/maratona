#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;

    while(cin >> T){
        if(T == 0)
            break;
        int x, y;
        cin >> x >> y;

        for(int i = 0, a, b; i < T; i++){
            cin >> a >> b;

            if(a == x || b == y)
                cout << "divisa" << endl;
            else if(a > x and b > y)
                cout << "NE" << endl;
            else if(a < x and b > y)
                cout << "NO" << endl;
            else if(a < x and b < y)
                cout << "SO" << endl;
            else
                cout << "SE" << endl;
        }
    }

    return 0;
}
