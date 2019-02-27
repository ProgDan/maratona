
#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int N, i, j, k, indent, max;

    while (1)
    {
        cin >> N;

        if (N == 0) return 0;

        max = int(pow( 2, 2*(N-1)) );
        indent = 1;

        while (max / 10)
        {
            indent++;
            max /= 10;
        }

        for (i = 0; i < N; i++)
        {
            j = i;
            k = 0;

            while (k < N-1)
            {
                cout << right << setw(indent) << int (pow (2, j) )<< " ";
                k++;
                j++;
            }

            cout << right << setw(indent) << int (pow (2, j) )<< "\n";
        }
        cout << endl;
    }

    return 0;
}

