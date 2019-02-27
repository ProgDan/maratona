#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int convert(string s);

int main(void)
{
    int n;
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;

        cout << convert(s) << " leds" << endl;
    }

    return 0;
}

int convert(string s)
{
    int con = 0;
    for(int i = 0; i < s.length(); i++){
        switch(s[i])
        {
            case '1':
                con += 2;
                break;
            case '2':
            case '3':
            case '5':
                con += 5;
                break;
            case '4':
                con += 4;
                break;
            case '6':
            case '9':
            case '0':
                con += 6;
                break;
            case '7':
                con += 3;
                break;
            case '8':
                con += 7;
                break;
        }
    }

    return con;
}
