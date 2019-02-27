
#include <bits/stdc++.h>
using namespace std;

int main()
{

	//freopen ( "in.txt", "r", stdin );
	int n, i = 0;

	while ( scanf ( "%d", &n ) != EOF )
	{

		i++;


		if ( n == 0 )
		{
			cout << "Caso " << i << ": 1 numero" << endl << "0" << endl << endl;
			continue;
		}

		int j =  ( n * ( n + 1 ) ) / 2 + 1;
		cout << "Caso " << i << ": " << j << " numeros" << endl << "0 ";

		int r = 0;

		for ( int p = 1; p <= n; p++ )
		{
			for ( int q = 0; q < p; q++ )
			{
				cout << p;
				r++;

				if ( r < j - 1 )
				{
					cout << " ";
				}
			}
		}

		cout << endl << endl;
	}



	return 0;
}
