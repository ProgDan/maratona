#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int n;

    while(cin >> n){
        if(n == 0)
            break;

        for(int i = 0; i < n; i++){
            int a, b, c, d, e, con = 0;
            cin >> a >> b >> c >> d >> e;
            if(a <= 127)
                con++, a = 1;
            else
                a = 0;
            if(b <= 127)
                con++, b = 1;
            else
                b = 0;
            if(c <= 127)
                con++, c = 1;
            else
                c = 0;
            if(d <= 127)
                con++, d = 1;
            else
                d = 0;
            if(e <= 127)
                con++, e = 1;
            else
                e = 0;


            if(con == 1){
                if(a)
                    cout << "A" << endl;
                if(b)
                    cout << "B" << endl;
                if(c)
                    cout << "C" << endl;
                if(d)
                    cout << "D" << endl;
                if(e)
                    cout << "E" << endl;
            }
            else
                cout << "*" << endl;
        }
    }

    return 0;
}
