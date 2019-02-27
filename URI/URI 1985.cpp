
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int p;
	double q, x, sum = 0;
	cin >> p;

	while ( p-- )
	{
		cin >> x >> q;
		sum += ( ( x - 999.5 ) * q );
	}

	cout << fixed << setprecision ( 2 ) << sum << endl;

	return 0;
}
