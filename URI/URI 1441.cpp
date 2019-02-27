
#include <bits/stdc++.h>
using namespace std;

int ans;

int Halistone ( int n )
{

	if ( n == 1 )
	{
		return ans;
	}

	if ( n % 2 )
	{
		int t = 3 * n + 1;

		if ( ans < t )
		{
			ans = t;
		}

		return Halistone ( t );
	}

	else
	{
		return Halistone ( n / 2 );
	}
}

int main()
{

	int n;

	while ( 1 )
	{
		cin >> n;

		if ( !n )
		{
			return 0;
		}

		ans = n;
		cout << Halistone ( n ) << endl;

	}

	return 0;
}
