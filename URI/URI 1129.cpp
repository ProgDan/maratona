
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int n, sum;
	int ans[5];

	while ( cin >> n && n )
	{
		for ( int t = 0; t < n; t++ )
		{
			sum = 0;

			for ( int i = 0; i < 5; i++ )
			{
				cin >> ans[i];

				if ( ans[i] <= 127 )
				{
					sum++;
				}
			}

			if ( sum != 1 )
			{
				cout << "*" << endl;
			}

			else
			{
				for ( int i = 0; i < 5; i++ )
				{
					if ( ans[i] <= 127 )
					{
						cout << char ( i + 'A' ) << endl;
						break;
					}
				}
			}
		}
	}

	return 0;
}
