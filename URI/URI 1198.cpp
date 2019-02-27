
#include <bits/stdc++.h>
using namespace std;

int main()
{
	double x, y;

	while ( scanf ( "%lf %lf", &x, &y ) == 2 )
	{
		cout << fixed << setprecision ( 0 ) << abs ( x - y ) << endl;
	}

	return 0;
}
