
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;

loop:

	while ( cin >> n )
	{
		int x = sqrt ( n );

		for ( int i = 0; i <= x; i++ )
		{
			int d = n - i * i;
			int p = sqrt ( d );

			if ( p * p == d )
			{
				cout << "YES" << endl;
				goto loop;
			}
		}

		cout << "NO" << endl;
	}

	return 0;
}
