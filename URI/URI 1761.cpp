
#include <bits/stdc++.h>
using namespace std;

int main()
{
	double A, B, C;

	while ( cin >> A >> B >> C )
	{
		double ans = ( tan ( A *  3.141592654 / 180 ) * B + C ) * 5;
		cout << fixed << setprecision ( 2 ) << ans << endl;
	}

	return 0;
}
