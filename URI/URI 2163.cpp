
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	int arr[N + 2][M + 2];

	for ( int i = 1; i <= N; i++ )
	{
		for ( int j = 1; j <= M; j++ )
		{
			cin >> arr[i][j];
		}
	}

	for ( int i = 1; i <= N; i++ )
	{
		for ( int j = 1; j <= M; j++ )
		{
			if ( arr[i][j] == 42 )
				if
				(
					( arr[i - 1][j - 1] == 7 ) and
					( arr[i - 1][j] == 7 ) and
					( arr[i - 1][j + 1] == 7 ) and
					( arr[i][j - 1] == 7 ) and
					( arr[i][j + 1] == 7 ) and
					( arr[i + 1][j - 1] == 7 ) and
					( arr[i + 1][j] == 7 ) and
					( arr[i + 1][j + 1] == 7 )
				)
				{
					cout << i << " " << j << endl;
					return 0;
				}


		}
	}

	cout << "0 0" << endl;
	return 0;
}
