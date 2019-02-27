#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

struct point{
    double x, y;
}val[2];

int main(void)
{
    for(int i = 0; i < 2; i++)
        cin >> val[i].x >> val[i].y;

    cout << fixed << setprecision(4) << sqrt(pow(val[0].x - val[1].x, 2) + pow(val[0].y - val[1].y, 2)) << endl;

    return 0;
}

