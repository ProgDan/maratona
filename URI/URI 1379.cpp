
#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long x, y;

	while ( cin >> x >> y && x && y )
	{
		long long int z1 = 2 * x - y;
		long long int z2 = 2 * y - x;

		long long int minimum = min ( z1, z2 );

		if ( ( x + y ) % 2 == 0 )
		{
			long long int z3 = ( x + y ) / 2;

			minimum = min ( minimum, z3 );
		}

		cout << minimum << endl;
	}

	return 0;
}
