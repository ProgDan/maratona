
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;

	while ( cin >> n && n )
	{
		int arr[n];
		int maxx = -99999;
		int index = 0;

		for ( int i = 0; i < n; i++ )
		{
			cin >> arr[i];

			if ( arr[i] > maxx )
			{
				maxx = arr[i];
				index = i;
			}
		}

		arr[index] = -99999;
		maxx = -99999;

		for ( int i = 0; i < n; i++ )
		{
			if ( arr[i] > maxx )
			{
				maxx = arr[i];
				index = i;
			}
		}

		cout << index + 1 << endl;
	}

	return 0;
}
