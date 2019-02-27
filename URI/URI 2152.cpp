
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int t, h, m, o;
	cin >> t;

	while ( t-- )
	{
		cin >> h >> m >> o;

		if ( h < 10 ) cout << "0";

		cout << h << ":";

		if ( m < 10 ) cout << "0";

		cout << m;

		if ( o == 1 ) cout << " - A porta abriu!" << endl;

		else cout << " - A porta fechou!" << endl;
	}

	return 0;
}
