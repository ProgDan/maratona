#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int r, c;
    scanf("%i %i", &r, &c);

    int v[r][c];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%i", &v[i][j]);

    int x = 0, y = 0;
    for(int i = 1; i < r - 1; i++){
        for(int j = 1; j < c - 1; j++){
            if(v[i][j] == 42 && v[i - 1][j - 1] == 7 && v[i][j - 1] == 7 && v[i + 1][j - 1] == 7 && v[i - 1][j] == 7 && v[i + 1][j] == 7 && v[i - 1][j + 1] == 7 && v[i][j + 1] == 7 && v[i + 1][j + 1] == 7){
                x = i + 1, y = j + 1, i = r, j = c;
            }
        }
    }

    printf("%i %i\n", x, y);

    return 0;
}
