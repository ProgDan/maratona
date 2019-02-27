#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    double sum = 0.0;
    for(int i = 0, n, a; i < T; i++){
        cin >> n >> a;
        n -= 1001;

        switch(n)
        {
            case 0:
                sum += (a * 1.50);
                break;
            case 1:
                sum += (a * 2.50);
                break;
            case 2:
                sum += (a * 3.50);
                break;
            case 3:
                sum += (a * 4.50);
                break;
            case 4:
                sum += (a * 5.50);
                break;
        }
    }

    cout << fixed << setprecision(2) << sum << endl;

    return 0;
}
