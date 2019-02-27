
#include <bits/stdc++.h>
using namespace std;

int arr[10005];

int main()
{
	int n, sum;

	while ( cin >> n && n != 0 )
	{
		for ( int i = 1; i <= n; i++ )
		{
			cin >> arr[i];
		}

		arr[0] = arr[n];
		arr[n + 1] = arr[1];

		sum = 0;

		for ( int i = 1; i <= n; i++ )
		{
			if ( arr[i - 1] > arr[i] && arr[i + 1] > arr[i] )
			{
				sum++;
			}

			else if ( arr[i - 1] < arr[i] && arr[i + 1] < arr[i] )
			{
				sum++;
			}
		}

		cout << sum << endl;
	}

	return 0;
}
