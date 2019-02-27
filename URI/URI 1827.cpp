
#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main()
{
	int N, i, j, k;

	//freopen ("in.txt", "r", stdin);

	while ( scanf ( "%d", &N ) == 1 )
	{
		int arr[N][N];

		for ( i = 0; i < N; i++ )
			for ( j = 0; j < N; j++ )
				arr[i][j] = 0;


		for ( i = 0; i < N; i++ )
			arr[i][i] = 2;


		for ( i = 0; i < N; i++ )
			arr[i][N - i - 1] = 3;


		k = N / 3;

		for ( i = k; i < N - k; i++ )
			for ( j = k; j < N - k; j++ )
				arr[i][j] = 1;

		arr[ ( N - 1 ) / 2][ ( N - 1 ) / 2] = 4;


		for ( i = 0; i < N; i++ )
		{
			for ( j = 0; j < N; j++ )
			{
				cout << arr[i][j];
			}

			cout << endl;
		}

		cout << endl;
	}
}
