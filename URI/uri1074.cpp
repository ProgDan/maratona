#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    long int n;
    for(int i = 0; i < T; i++){
        cin >> n;

        if(n == 0)
            cout << "NULL" << endl;
        else if(n & 1 and n > 0)
            cout << "ODD POSITIVE" << endl;
        else if(n & 1 and n < 0)
            cout << "ODD NEGATIVE" << endl;
        else if(!(n & 1) and n > 0)
            cout << "EVEN POSITIVE" << endl;
        else
            cout << "EVEN NEGATIVE" << endl;
    }

    return 0;
}
