#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int value(string s);

int main(void)
{
    string s;
    int sum = 0;

    while(getline(cin, s)){

        if(s == "caw caw"){
            cout << sum << endl;
            sum = 0;
        }

        sum += value(s);
    }

    return 0;
}

int value(string s)
{
    int sum = 0;
    for(int i = 0; i < 3; i++){
        if(s[i] == '*'){
            switch(i)
            {
                case 0:
                    sum += 4;
                    break;
                case 1:
                    sum += 2;
                    break;
                case 2:
                    sum += 1;
                    break;
            }
        }
    }

    return sum;
}
