#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n, A_min, A_max;

   while(cin >> n >> A_min >> A_max)
   {
        int h, cnt = 0;

        while(n--)
        {
            cin >> h;

            if(h >= A_min && h <= A_max) {cnt++;}
        }

        cout << cnt << endl;
   }

    return 0;
}
