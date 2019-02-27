#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 4 * i + 1; j <= 4 * i + 3; j++){
            cout << j << " ";
            if(j == 4 * i + 3)
                cout << "PUM";
        }

        cout << endl;
    }

    return 0;
}
