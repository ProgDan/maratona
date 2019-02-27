
#include <bits/stdc++.h>
using namespace std;

int arr[10][10];

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int t, i, j;
	cin >> t;

	while ( t-- )
	{
		for ( i = 1; i <= 9; i += 2 )
		{
			for ( j = 1; j <= i; j += 2 )
			{
				cin >> arr[i][j];
			}

		}

		for ( i = 2; i <= 8; i += 2 )
		{
			arr[9][i] = ( arr[7][i - 1] - arr[9][i - 1] - arr[9][i + 1] ) / 2;
		}

		for ( i = 8; i > 0; i-- )
		{
			for ( j = 1; j <= i; j++ )
			{
				arr[i][j] = arr[i + 1][j] + arr[i + 1][j + 1];
			}
		}

		for ( i = 1; i <= 9; i++ )
		{
			for ( j = 1; j < i; j++ )
			{
				cout << arr[i][j] << " ";
			}

			cout << arr[i][j] << endl;
		}

	}

	return 0;
}
