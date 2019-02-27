#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int gcd(int a, int b);

int main(void)
{
    int n;
    cin >> n;

    int a, b, d, e;
    char ch, c;
    for(int i = 0; i < n; i++){
        cin >> a >> ch >> b >> c >> d >> ch >> e;

        int m = b * e;
        int f, s, g;
        switch(c)
        {
            case '+':
                f = (m / b) * a + (m / e) * d;
                s = m;
                g = gcd(abs(f), abs(s));
                cout << f << ch << s << " = " << f / g << ch << s / g << endl;
                break;
            case '-':
                f = (m / b) * a - (m / e) * d;
                s = m;
                g = gcd(abs(f), abs(s));
                cout << f << ch << s << " = " << f / g << ch << s / g << endl;
                break;
            case '*':
                f = a * d;
                s = m;
                g = gcd(abs(f), abs(s));
                cout << f << ch << s << " = " << f / g << ch << s / g << endl;
                break;
            case '/':
                f = a * e;
                s = b * d;
                g = gcd(abs(f), abs(s));
                cout << f << ch << s << " = " << f / g << ch << s / g << endl;
                break;
        }
    }

    return 0;
}

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b, a % b);
}
