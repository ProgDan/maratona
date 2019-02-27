
#include <bits/stdc++.h>
using namespace std;
int arr[1009];

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int n, c, p, flag, x;

	while ( cin >> n && n )
	{
		flag = 0;

		for ( int  i = 0; i < n; i++ )
		{
			arr[i] = 0;
		}

		for ( int  i = 0; i < n; i++ )
		{
			cin >> c >> p;
			x = i + p;

			if ( x < 0 || x >= n || arr[x] != 0 )
			{
				flag = 1;
			}

			else
			{
				arr[x] = c;
			}
		}

		if ( flag == 0 )
		{
			for ( int i = 0; i < n - 1; i++ )
			{
				cout << arr[i] << " ";
			}

			cout << arr[n - 1] << endl;
		}

		else
		{
			cout << "-1" << endl;
		}
	}

	return 0;
}
