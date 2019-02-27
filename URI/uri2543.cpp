#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int n, a;

    while(cin >> n >> a){
        int con = 0;

        for(int i = 0, b, c; i < n; i++){
            cin >> b >> c;

            if(b == a and !c)
                con++;
        }
        cout << con << endl;
    }

    return 0;
}
