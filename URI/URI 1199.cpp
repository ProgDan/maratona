
/* stoll() requires c++11 or higher */

#include <bits/stdc++.h>
using namespace std;

string::size_type sz = 0;

void to_hex ( long long int number )
{
	if ( number <= 15 )
	{
		if ( number > 9 )
			cout << ( char ) ( number - 10 + 'A' );

		else
			cout << number;

		return;
	}


	int rem = number % 16;
	number /= 16;
	to_hex ( number );

	if ( rem > 9 )
		cout << ( char ) ( rem - 10 + 'A' );

	else
		cout << rem;
}

int main()
{
	string str;

	while ( cin >> str )
	{
		if ( str[0] == '-' ) break;

		if ( str[0] == '0' && str[1] == 'x' )
		{
			cout << stoll ( str.substr ( 2, str.length() - 2 ), &sz, 16 ) << endl;
		}

		else
		{
			cout << "0x";
			to_hex ( stoll ( str, &sz, 10 ) );
			cout << endl;
		}
	}

	return 0;
}
