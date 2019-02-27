
#include <bits/stdc++.h>
using namespace std;
int N, D, a;
int alm[301];

int main()
{

	//freopen ( "in.txt", "r", stdin );

loop:

	while ( 1 )
	{
		cin >> N >> D;

		if ( N == 0 && D == 0 )
		{
			return 0;
		}

		for ( int i = 0; i < N; i++ )
		{
			alm[i] = 0;
		}

		for ( int i = 0; i < D; i++ )
		{
			for ( int j = 0; j < N; j++ )
			{
				cin >> a;
				alm[j] += a;
			}
		}

		for ( int i = 0; i < N; i++ )
		{
			if ( alm[i] == D )
			{
				cout << "yes" << endl;
				goto loop;
			}
		}

		cout << "no" << endl;
	}

	return 0;
}
