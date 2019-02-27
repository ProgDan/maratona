
/* stoll() requires c++11 or higher */

#include <bits/stdc++.h>
using namespace std;

string::size_type sz;

long long int gcd ( long long int x, long long int y )
{
	long long int a = x;
	long long int b = y;

	if ( a < b ) swap ( a, b );

	if ( a % b == 0 ) return b;

	return gcd ( b, a % b );
}

long long int func ( string str1, string str2 )
{
	long long int a = stoll ( str1, &sz, 2 );
	long long int b = stoll ( str2, &sz, 2 );

	if ( gcd ( a, b ) == 1 ) return false;

	return true;
}

int main()
{
	string s1, s2;
	int T;

	cin >> T;

	for ( int i = 1; i <= T; i++ )
	{
		cin >> s1 >> s2;

		if ( func ( s1, s2 ) == true )
		{
			cout << "Pair #" << i << ": All you need is love!" << endl;
		}

		else cout << "Pair #" << i << ": Love is not all you need!" << endl;
	}

	return 0;
}
