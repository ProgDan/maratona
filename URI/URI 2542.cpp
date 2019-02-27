
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while(cin >> N)
    {
        int M, L;
        int M_card, L_card;
        int attribute;

        cin >> M >> L;

        int M_deck[M][N];
        int L_deck[L][N];

        for(int i = 0; i < M; i++)
        {
            for(int j = 0; j < N; j++)
            {
                cin >> M_deck[i][j];
            }
        }

        for(int i = 0; i < L; i++)
        {
            for(int j = 0; j < N; j++)
            {
                cin >> L_deck[i][j];
            }
        }

        cin >> M_card >> L_card;
        cin >> attribute;

        if(M_deck[M_card-1][attribute-1] > L_deck[L_card-1][attribute-1]) {cout << "Marcos" << endl;}
        else if(M_deck[M_card-1][attribute-1] < L_deck[L_card-1][attribute-1]) {cout << "Leonardo" << endl;}
        else {cout << "Empate" << endl;}

    }

    return 0;
}