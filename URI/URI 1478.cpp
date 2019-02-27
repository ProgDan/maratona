
#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main()
{
	int N, i, j, k;

	while ( 1 )
	{
		cin >> N;

		if ( N == 0 ) return 0;

		for ( i = 1; i <= N; i++ )
		{
			j = i;
			k = 1;


			while ( j > 1 )
			{
				printf ( "%3d ", j );
				j--;
			}


			while ( k <= N - i )
			{
				printf ( "%3d ", k );
				k++;
			}


			printf ( "%3d\n", N - i + 1 );
		}

		printf ( "\n" );
	}
}
