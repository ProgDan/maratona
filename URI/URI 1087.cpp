
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen ( "in.txt", "r", stdin );

	double x1, y1, x2, y2, dx, dy;

	while ( 1 )
	{
		cin >> y1 >> x1 >> y2 >> x2;
		y1 = 9 - y1;
		y2 = 9 - y2;

		if ( x1 == 0 )
		{
			return 0;
		}

		if ( x1 == x2 && y1 == y2 )
		{
			cout << 0 << endl;
		}

		else if ( x1 - x2 == 0 || y1 - y2 == 0 )
		{
			cout << 1 << endl;
		}

		else
		{
			dx = x1 - x2;
			dy = y1 - y2;

			if ( abs ( dy / dx ) == 1 )
			{
				cout << 1 << endl;
			}

			else
			{
				cout << 2 << endl;
			}
		}
	}

	return 0;
}
