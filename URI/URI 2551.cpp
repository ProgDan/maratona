#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin >> n)
    {
        double t, d, speed, max_speed = -1;

        for(int i = 1; i <= n; i++)
        {
            cin >> t >> d;
            speed = d / t;

            if(speed > max_speed)
            {
                cout << i << endl;
                max_speed = speed;
            }
        }
    }

    return 0;
}