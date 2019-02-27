
#include <bits/stdc++.h>
using namespace std;

int main()
{
	double Q, D, P, ans;
	//freopen ( "in.txt", "r", stdin );

	while ( scanf ( "%lf %lf %lf", &Q, &D, &P ) == 3 )
	{
		if ( P == Q )
		{
			ans = 0;
		}

		else
		{
			ans = trunc ( ( P * Q * D ) / ( P - Q ) );
		}

		cout << fixed << setprecision ( 0 ) << ans << " pagina";

		if ( ans > 1 )
		{
			cout << "s";
		}

		cout << endl;
	}

	return 0;
}
