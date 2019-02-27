#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    int my_x, my_y;
    int analogimon_x, analogimon_y;
    int x_dif, y_dif;

    int num;

    while(cin >> n >> m)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> num;

                if(num == 1) // my position
                {
                    my_x = i;
                    my_y = j;
                }


                else if(num == 2) // analogimon position
                {
                    analogimon_x = i;
                    analogimon_y = j;
                }
            }
        }

        x_dif = abs(my_x - analogimon_x);
        y_dif = abs(my_y - analogimon_y);

        cout << x_dif + y_dif << endl;
    }

    return 0;
}