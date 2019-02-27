
#include <bits/stdc++.h>
using namespace std;

int n, lc, rc, x;
char dir;
char arr[1001];


int main()
{


	while ( 1 )
	{
		scanf ( "%d", &n );
		lc = 0;
		rc = 0;

		if ( n == 0 )
		{
			return 0;
		}

		scanf ( "%s", arr );

		for ( int i = 0; i < n; i++ )
		{
			if ( arr[i] == 'D' )
			{
				rc++;
			}

			else if ( arr[i] == 'E' )
			{
				lc++;
			}
		}

		if ( lc > rc )
		{
			x = ( lc - rc ) % 4;

			if ( x == 0 )
			{
				dir = 'N';
			}

			else if ( x == 1 )
			{
				dir = 'O';
			}

			else if ( x == 2 )
			{
				dir = 'S';
			}

			else
			{
				dir = 'L';
			}

		}

		else
		{
			x = ( rc - lc ) % 4;

			if ( x == 0 )
			{
				dir = 'N';
			}

			else if ( x == 1 )
			{
				dir = 'L';
			}

			else if ( x == 2 )
			{
				dir = 'S';
			}

			else
			{
				dir = 'O';
			}

		}

		cout << dir << endl;
	}

	return 0;
}
