
#include <bits/stdc++.h>
using namespace std;

int down_to_one_digit ( int n )
{
	if ( n < 10 )
	{
		return n;
	}

	int sum = 0;
	int x = n;


	while ( x > 0 )
	{
		sum += ( x % 10 );
		x /= 10;
	}

	return down_to_one_digit ( sum );
}


int main()
{

	int x, y;
	char s1[105], s2[105];

	while ( cin >> s1 >> s2 )
	{
		if ( strcmp ( s1, "0" ) == 0 && strcmp ( s2, "0" ) == 0 )
		{
			return 0;
		}

		x = 0;
		y = 0;

		for ( int i = 0; i < strlen ( s1 ); i++ )
		{
			x += int ( s1[i] - 48 );
		}

		for ( int i = 0; i < strlen ( s2 ); i++ )
		{
			y += int ( s2[i] - 48 );
		}

		x = down_to_one_digit ( x );
		y = down_to_one_digit ( y );

		if ( x > y )
		{
			cout << 1 << endl;
		}

		else if ( x < y )
		{
			cout << 2 << endl;
		}

		else
		{
			cout << 0 << endl;
		}
	}

	return 0;
}
