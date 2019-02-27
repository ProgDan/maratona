
#include <bits/stdc++.h>
using namespace std;

int  gcd ( int  a,  int  b,  int  c )

{

	if ( a % c == 0  &&  b % c == 0 )
	{
		return  c;
	}

	else

	{
		return  gcd ( a, b, c - 1 );
	}

}


int main()
{
	int a, b, c;
	//freopen ( "in.txt", "r", stdin );

	while ( scanf ( "%d %d %d", &a, &b, &c ) == 3 )
	{
		if ( a > c )
		{
			swap ( a, c );
		}

		if ( a > b )
		{
			swap ( a, b );
		}

		if ( b > c )
		{
			swap ( b, c );
		}

		if ( a * a + b * b != c * c )
		{
			cout << "tripla" << endl;
		}

		else if ( ( a * a + b * b == c * c ) && ( gcd ( a, b, c ) == 1 ) )
		{
			cout << "tripla pitagorica primitiva" << endl;
		}

		else
		{
			cout << "tripla pitagorica" << endl;
		}
	}

	return 0;
}
