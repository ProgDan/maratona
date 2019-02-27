
#include <bits/stdc++.h>
using namespace std;

int grid[9][9];

int hor[10];
int ver[10];
int sq[10];

void reset ()
{
	for ( int i = 0; i < 10; i++ )
	{
		sq[i] = 0;
	}
}

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int t, flag = 0, i, j;
	cin >> t;

	for ( int x = 1; x <= t; x++ )
	{
		flag = 0;

		for (  i = 0; i < 9; i++ )
		{
			for (  j = 0; j < 9; j++ )
			{
				cin >> grid[i][j];
			}
		}

		for (  i = 0; i < 9; i++ )
		{
			for ( int p = 0; p < 10; p++ )
			{
				hor[p] = 0;
			}

			for (  j = 0; j < 9; j++ )
			{
				if ( hor[grid[i][j]] != 0 )
				{
					flag = 1;
					//cout << "HERE" << endl;
				}

				else
				{
					hor[grid[i][j]] = 1;
				}
			}
		}

		for (  i = 0; i < 9; i++ )
		{
			for ( int p = 0; p < 10; p++ )
			{
				ver[p] = 0;
			}

			for (  j = 0; j < 9; j++ )
			{
				if ( ver[grid[j][i]] != 0 )
				{
					flag = 1;
				}

				else
				{
					ver[grid[j][i]] = 1;
				}
			}
		}

		reset ();

		for ( i = 0; i < 3; i++ )
		{
			for ( j = 0; j < 3; j++ )
			{
				if ( sq[grid[i][j]] != 0 )
				{
					flag = 1;
				}

				else
				{
					sq[grid[i][j]] = 1;
				}

			}
		}

		reset ();

		for ( i = 0; i < 3; i++ )
		{
			for ( j = 3; j < 6; j++ )
			{
				if ( sq[grid[i][j]] != 0 )
				{
					flag = 1;
				}

				else
				{
					sq[grid[i][j]] = 1;
				}

			}
		}

		reset ();

		for ( i = 0; i < 3; i++ )
		{
			for ( j = 6; j < 9; j++ )
			{
				if ( sq[grid[i][j]] != 0 )
				{
					flag = 1;
				}

				else
				{
					sq[grid[i][j]] = 1;
				}

			}
		}

		reset ();

		for ( i = 3; i < 6; i++ )
		{
			for ( j = 0; j < 3; j++ )
			{
				if ( sq[grid[i][j]] != 0 )
				{
					flag = 1;
				}

				else
				{
					sq[grid[i][j]] = 1;
				}

			}
		}

		reset ();

		for ( i = 3; i < 6; i++ )
		{
			for ( j = 3; j < 6; j++ )
			{
				if ( sq[grid[i][j]] != 0 )
				{
					flag = 1;
				}

				else
				{
					sq[grid[i][j]] = 1;
				}

			}
		}

		reset ();

		for ( i = 3; i < 6; i++ )
		{
			for ( j = 6; j < 9; j++ )
			{
				if ( sq[grid[i][j]] != 0 )
				{
					flag = 1;
				}

				else
				{
					sq[grid[i][j]] = 1;
				}

			}
		}

		reset ();

		for ( i = 6; i < 9; i++ )
		{
			for ( j = 0; j < 3; j++ )
			{
				if ( sq[grid[i][j]] != 0 )
				{
					flag = 1;
				}

				else
				{
					sq[grid[i][j]] = 1;
				}

			}
		}

		reset ();

		for ( i = 6; i < 9; i++ )
		{
			for ( j = 3; j < 6; j++ )
			{
				if ( sq[grid[i][j]] != 0 )
				{
					flag = 1;
				}

				else
				{
					sq[grid[i][j]] = 1;
				}

			}
		}

		reset ();

		for ( i = 6; i < 9; i++ )
		{
			for ( j = 6; j < 9; j++ )
			{
				if ( sq[grid[i][j]] != 0 )
				{
					flag = 1;
				}

				else
				{
					sq[grid[i][j]] = 1;
				}

			}
		}

		if ( !flag )
		{
			cout << "Instancia " << x << endl << "SIM" << endl << endl;
		}

		else
		{
			cout <<  "Instancia " << x << endl << "NAO" << endl << endl;
		}

		flag = 0;

	}

	return 0;
}
