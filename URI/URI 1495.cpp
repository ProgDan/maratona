
#include <bits/stdc++.h>
using namespace std;


int main()
{
	//freopen ( "in.txt", "r", stdin );

	int n, g;

	while ( cin >> n >> g )
	{
		int f, a;
		int pts = 0;
		vector<int> arr;

		for ( int i = 0; i < n; i++ )
		{
			cin >> f >> a;
			arr.push_back ( a - f );
		}

		sort ( arr.begin(), arr.end() );

		for ( int i = 0; i < n; i++ )
		{
			if ( arr[i] < 0 )
			{
				pts += 3;
			}

			else if (  arr[i] == 0  )
			{
				if ( g == 0 )
				{
					pts += 1;
				}

				else if ( g > arr[i] )
				{
					g--;
					pts += 3;
				}
			}

			else if ( arr[i] >= 0  )
			{
				if ( g == arr[i] )
				{
					pts += 1;
					g = 0;
				}

				else if ( g > arr[i] )
				{
					pts += 3;
					g = g - arr[i] - 1;
				}
			}

		}

		cout << pts << endl;
	}

	return 0;
}
