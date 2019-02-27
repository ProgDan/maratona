#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a, b;
    cin >> a;

    while(cin >> b)
        if(b > a)
            break;

    int con = 0, sum = 0;
    for(int i = a; sum <= b; i++){
        sum += i;
        con++;
    }


    cout << con << endl;

    return 0;
}
