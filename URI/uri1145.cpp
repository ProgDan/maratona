#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;

    int con = 0;
    for(int i = 1; i <= b; i++){
        cout << i;
        if(++con < a)
            cout << " ";
        if(con == a){
            cout << endl;
            con = 0;
        }
    }

    return 0;
}
