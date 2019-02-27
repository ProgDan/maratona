
#include <bits/stdc++.h>
using namespace std;

int shot[51], pos[51];

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int t, n, i, s, sum = 0;
	char p ;
	cin >> t;

	while ( t-- )
	{
		cin >> n;
		sum = n;

		for ( i = 0; i < n; i++ )
		{
			cin >> s;
			shot[i] = ( s > 2 );
			//cout << shot[i] << " ";
		}

		//cout << "" << endl;

		for ( i = 0; i < n; i++ )
		{
			cin >> p;
			pos[i] = ( p == 'S' );
			//cout << pos[i] << " ";
		}

		//cout << "" << endl;

		for ( i = 0; i < n; i++ )
		{
			sum -= ( shot[i] == pos[i] );
		}

		cout << sum << endl;
	}

	return 0;
}
