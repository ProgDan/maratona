
#include <bits/stdc++.h>
using namespace std;

int josephus ( int n, int k )
{
	if ( n == 1 )
	{
		return 1;
	}

	return ( josephus ( n - 1, k ) + k - 1 ) % n + 1;
}

int main()
{

	int N, i;
	//freopen ( "in.txt", "r", stdin );

	while ( 1 )
	{
		cin >> N;

		if ( !N )
		{
			break;
		}

		for ( i = 1; ; i++ )
		{
			if ( josephus ( N - 1, i ) == 12 )
			{
				cout << i << endl;
				break;
			}
		}
	}

	return 0;
}
