#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int n, a, b;

    while(cin >> n >> a >> b){
        int con = 0;

        for(int i = 0, c; i < n; i++){
            cin >> c;
            if(c >= a and c <= b)
                con++;
        }

        cout << con << endl;
    }

    return 0;
}
