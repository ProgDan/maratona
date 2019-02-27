#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int m, d;

    while(cin >> m >> d){
        if(m == 12 and d == 25)
            cout << "E natal!" << endl;
        else if(m == 12 and d == 24)
            cout << "E vespera de natal!" << endl;
        else if(m == 12 and d > 24)
            cout << "Ja passou!" << endl;
        else{
            int con = 0;
            int arr[] = {25, 30, 31, 30, 31, 31, 30, 31, 30, 31, 29, 31};
            for(int i = 0; i <= 12 - m; i++){
                if(i == 12 - m)
                    con += (arr[i] - d);
                else
                    con += arr[i];
            }

            cout << "Faltam " << con << " dias para o natal!" << endl;
        }
    }

    return 0;
}
