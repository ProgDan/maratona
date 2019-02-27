
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, my_id;

    while(cin >> N >> my_id)
    {
        int id, game, sum = 0;

        while(N--)
        {
            cin >> id >> game;

            if(id == my_id && game == 0) {sum++;}
        }

        cout << sum << endl;
    }

    return 0;
}