#include <bits/stdc++.h>
using namespace std;

int main()
{
   // freopen("in.txt", "r", stdin);

    unsigned int N;
    while(cin >> N && N)
    {
        string first = "";
        int minimum = 10000;

        string str; 
        int A, T;

        for(unsigned i = 0; i < N; i++)
        {
            cin >> str >> A >> T;
            
            if((A - T) < minimum )
            {
                minimum = A - T;
                first = str;
            }
        }

        cout << first << endl;
    }

    return 0;
}
