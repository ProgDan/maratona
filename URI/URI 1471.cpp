
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, R, x;
	//freopen ( "in.txt", "r", stdin );

	while ( scanf ( "%d %d", &N, &R ) == 2 )
	{
		int arr[N + 1];

		for ( int i = 1; i <= N; i++ )
		{
			arr[i] = 0;
		}

		for ( int i = 0; i < R; i++ )
		{
			cin >> x;
			arr[x] = 1;
		}

		if ( N == R )
		{
			cout << "*";
		}


		else
		{
			for ( int i = 1; i <= N; i++ )
			{
				if ( arr[i] == 0 )
				{
					cout << i << " ";
				}
			}
		}

		cout << endl;
	}

	return 0;
}
