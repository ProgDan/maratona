#include <bits/stdc++.h>
using namespace std;
/*File Section*/
#define read()  freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)

int main(void)
{
    //read();
    int n, m;

    while(cin >> n >> m){
        if(n == 0 && m == 0)
            break;
        int con = 0;
        map<int, int>mm;
        for(int i = 0, temp; i < m; i++){
          cin >> temp;
          mm[temp]++;
        }

        map<int, int>::iterator it;
        for(it = mm.begin(); it != mm.end(); it++)
            if(it->second > 1)
                con++;
        cout << con << endl;
        mm.clear();
    }

    return 0;
}
