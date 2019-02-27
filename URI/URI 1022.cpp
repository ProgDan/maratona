
#include <bits/stdc++.h>
using namespace std;

int gcd ( int a, int b )
{
	int m, n;

	m = ( a > b ) ? a : b;
	n = a + b - m;

	if ( m == 0 || n == 0 )
	{
		return 1;
	}

	if ( m % n == 0 )
	{
		return n;
	}

	return gcd ( n, m % n );
}

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int n1, d1, n2, d2, tc, x, y;
	char op;

	cin >> tc;

	while ( tc-- )
	{

		cin >> n1;
		getchar();
		getchar();
		getchar();
		cin >> d1;

		getchar();
		cin >> op;
		getchar();

		cin >> n2;
		getchar();
		getchar();
		getchar();
		cin >> d2;

		if ( op == '+' )
		{
			x = n1 * d2 + n2 * d1;
			y = d1 * d2;
		}

		else if ( op == '-' )
		{
			x = n1 * d2 - n2 * d1;
			y = d1 * d2;
		}

		else if ( op == '*' )
		{
			x = n1 * n2;
			y = d1 * d2;
		}

		else
		{
			x = n1 * d2;
			y = d1 * n2;
		}

		double ans = double ( x ) / double ( y );

		if ( ans < 0 )
		{
			x = abs ( x );
			y = abs ( y );
			int g = gcd ( x, y );
			cout << "-" << x << "/" << y << " = -" << abs ( x / g ) << "/" << abs ( y / g ) << endl;
		}

		else
		{
			int g = gcd ( x, y );
			cout << x << "/" << y << " = " << x / g << "/" << y / g << endl;
		}


		//cout << n1 << " " << d1 << " " << n2 << " " << d2 << endl;
	}

	return 0;
}
