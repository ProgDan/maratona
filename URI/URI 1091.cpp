
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, x, y, N, M;

	while ( cin >> t && t != 0 )
	{
		cin >> N >> M;

		for ( int i = 0; i < t; i++ )
		{
			cin >> x >> y;

			if ( x > N && y > M )
			{
				cout << "NE" << endl;
			}

			else if ( x < N && y > M )
			{
				cout << "NO" << endl;
			}

			else if ( x < N && y < M )
			{
				cout << "SO" << endl;
			}

			else if ( x > N && y < M )
			{
				cout << "SE" << endl;
			}

			else
			{
				cout << "divisa" << endl;
			}
		}
	}

	return 0;
}
