#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;

    while(cin >> N >> M)
    {
        int grid[N][M];

        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
            {
                cin >> grid[i][j];
            }
        }

        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
            {
                if(grid[i][j] == 1) cout << "9";

                else
                {
                    int sum = 0;

                    if( (i-1) >= 0 && grid[i-1][j] == 1 ) sum++; // up
                    if( (i+1) <  N && grid[i+1][j] == 1 ) sum++; // down
                    if( (j-1) >= 0 && grid[i][j-1] == 1 ) sum++; // left
                    if( (j+1) <  M && grid[i][j+1] == 1 ) sum++; // right

                    cout << sum;
                }
            }
            cout << endl;
        }
    }

    return 0;
}