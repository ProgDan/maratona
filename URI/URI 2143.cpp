
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, n;

	while ( cin >> t and t )
	{
		while ( t-- )
		{
			cin >> n;

			if ( n % 2 == 1 ) cout << 2 * n - 1 << endl;

			else cout << 2 * n - 2 << endl;
		}
	}

	return 0;
}
