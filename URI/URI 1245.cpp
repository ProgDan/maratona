
#include <bits/stdc++.h>
using namespace std;

int shoes[41][2];

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int t, size, sum;
	char foot;

	while ( cin >> t )
	{
		getchar();
		sum = 0;

		for ( int i = 0; i < 61; i++ )
		{
			shoes[i][0] = shoes[i][1] = 0;
		}

		for ( int i = 0; i < t; i++ )
		{
			cin >> size;
			getchar();
			cin >> foot;

			if ( foot == 'D' )
			{
				shoes[size][0]++;
			}

			else
			{
				shoes[size][1]++;
			}
		}

		for ( int i = 0; i <= 60; i++ )
		{
			sum += min ( shoes[i][0], shoes[i][1] );
		}

		cout << sum << endl;

	}

	return 0;
}
