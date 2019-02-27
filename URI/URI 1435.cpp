
#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main()
{
	int N, i, j, k;

	//freopen ("in.txt", "r", stdin);

	while ( 1 )
	{
		cin >> N;

		if ( N == 0 ) return 0;

		int arr[N + 1][N + 1];

		k = ( N + 1 ) / 2  ;

		for ( i = 1; i <= k; i++ )
		{
			j = 1;

			while ( j < i )
			{
				arr[i][j] = j;
				j++;
			}

			while ( j <= k )
			{
				arr[i][j] = i;
				j++;
			}

		}


		for ( i = 1; i <= k; i++ )
		{
			for ( j = 1; j <= k; j++ )
			{
				arr[i][N + 1 - j] = arr[i][j];
			}
		}

		for ( i = 1; i <= k; i++ )
		{
			for ( j = 1; j <= N; j++ )
			{
				arr[N + 1 - i][j] = arr[i][j];
			}
		}


		for ( i = 1; i <= N; i++ )
		{

			for ( j = 1; j < N; j++ )
			{
				printf ( "%3d ", arr[i][j] );
			}

			printf ( "%3d\n", arr[i][j] );
		}

		cout << "\n";
	}

	return 0;
}
