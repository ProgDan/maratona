#include <bits/stdc++.h>
typedef long long int ll;
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

bool mod(string s, int a);

int main(void)
{
    string s;
    bool bl = false;
    while(cin >> s){
        bool j = true, leap = false;
        if(bl)
            cout << endl;

        if((!mod(s, 4) and mod(s, 100) ) or !mod(s, 400)){
            j = false;
            cout << "This is leap year." << endl;
            leap = true;
        }
        if(!mod(s, 15)){
            j = false;
            cout << "This is huluculu festival year." << endl;
        }
        if(!mod(s, 55) and leap)
                cout << "This is bulukulu festival year." << endl;
        if(j)
            cout << "This is an ordinary year." << endl;

        bl = true;
    }

    return 0;
}

bool mod(string s, int a)
{
    ll sum = 0;
    for(int i = 0; i < s.length(); i++){
        sum = (s[i] - '0') + sum * 10;
        sum %= a;
    }

    return sum;
}
