
#include <bits/stdc++.h>
using namespace std;

double fast_fibonacci ( int n )
{
	double s = sqrt ( 5 );
	double x = ( 1 + s ) / 2;
	double y = ( 1 - s ) / 2;
	return ( pow ( x, n ) - pow ( y, n ) ) / s;
}

int main()
{
	int n;
	cin >> n;
	cout << fixed << setprecision ( 1 ) << fast_fibonacci ( n ) << endl;

	return 0;
}
