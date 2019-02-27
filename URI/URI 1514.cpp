
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int n , m, num, sum;
	int f1 = 1, f2 = 1, f3 = 1, f4 = 1;

	while ( cin >> n >> m && n && m )
	{
		int arr[n][m];
		f1 = 1;
		f2 = 1;
		f3 = 1;
		f4 = 1;

		for ( int i = 0; i < n; i++ )
		{
			sum = 0;

			for ( int j = 0; j < m; j++ )
			{

				cin >> num;
				sum += num;
				arr[i][j] = num;
			}

			if ( sum == m )
			{
				f1 = 0;
			}

			if ( sum == 0 )
			{
				f4 = 0;
			}
		}

		for ( int j = 0; j < m; j++ )
		{
			sum = 0;

			for ( int i = 0; i < n; i++ )
			{
				sum += arr[i][j];
			}

			if ( sum == n )
			{
				f3 = 0;
			}

			if ( sum == 0 )
			{
				f2 = 0;
			}
		}

		//cout << f1 << " " << f2 << " " << f3 << " " << f4 << endl;

		cout << f1 + f2 + f3 + f4 << endl;
	}

	return 0;
}
