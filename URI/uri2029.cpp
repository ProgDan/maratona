#include <bits/stdc++.h>
#define Pi 3.14
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

template<class T> inline T sqr(T a) { return a * a; }

int main(void)
{
    double v, d;

    while(cin >> v >> d){

        cout << fixed << setprecision(2);
        cout << "ALTURA = " << (4.0 * v) / (Pi * sqr(d)) << endl;
        cout << "AREA = " << Pi * sqr(d / 2.0) << endl;
    }

    return 0;
}
