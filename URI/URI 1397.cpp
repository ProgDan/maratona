
#include <bits/stdc++.h>
using namespace std;

int main()
{
	while ( 1 )
	{
		int n, x, y, a = 0, b = 0;
		cin >> n;

		if ( !n )
		{
			return 0;
		}

		while ( n-- )
		{
			cin >> x >> y;

			if ( x > y )
			{
				a++;
			}

			else if ( x < y )
			{
				b++;
			}
		}

		cout << a << " " << b << endl;
	}

	return 0;
}
