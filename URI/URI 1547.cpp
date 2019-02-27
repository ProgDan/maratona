
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int tc;
	cin >> tc;

	while ( tc-- )
	{
		int q, s;
		cin >> q >> s;

		int arr[q];

		for ( int i = 0; i < q; i++ )
		{
			cin >> arr[i];
			arr[i] = abs ( s - arr[i] );
		}

		int d = 1000;
		int index = 0;

		for ( int i = 0; i < q; i++ )
		{
			if ( arr[i] < d )
			{
				d = arr[i];
				index = i;
			}
		}

		cout << index + 1 << endl;
	}

	return 0;
}
