#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int arr[] = {2, 5, 10, 20, 50, 100};
 
    int  N, M;
 
loop:
 
    while ( cin >> N >> M and ( N + M ) )
    {
        for ( int i = 0; i < 5; i++ )
        {
            for ( int j = i + 1; j <= 5; j++ )
            {
                if ( M - N - arr[i] - arr[j] == 0 )
                {
                    cout << "possible" << endl;
                    goto loop;
                }
            }
        }
 
        cout << "impossible" << endl;
    }
 
    return 0;
}
