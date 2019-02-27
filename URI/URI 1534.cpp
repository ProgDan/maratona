
#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main()
{
	int N, i, j, x, y;

	//freopen ("in.txt", "r", stdin);

	while ( scanf ( "%d", &N ) == 1 )
	{
		int arr[N][N];

		x  = 0;
		y = N - 1;

		for ( i = 0; i < N; i++ )
		{
			for ( j = 0; j < N; j++ )
			{
				arr[i][j] = 3;
			}

			arr[i][x++] = 1;
			arr[i][y--] = 2;
		}


		for ( i = 0; i < N; i++ )
		{
			for ( j = 0; j < N; j++ )
			{
				cout << arr[i][j];
			}

			cout << endl;
		}
	}

	return 0;
}
