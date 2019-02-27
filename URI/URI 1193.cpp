
/* stoll() requires C++11 or higher */

#include <bits/stdc++.h>
using namespace std;

string::size_type sz = 0;

void to_binary ( long long int number )
{
	int rem;

	if ( number <= 1 )
	{
		cout << number;
		return;
	}

	rem = number % 2;
	to_binary ( number / 2 );
	cout << rem;
}

void to_hex ( long long int number )
{
	if ( number <= 15 )
	{
		if ( number > 9 )
			cout << ( char ) ( number - 10 + 'a' );

		else
			cout << number;

		return;
	}


	int rem = number % 16;
	number /= 16;
	to_hex ( number );

	if ( rem > 9 )
		cout << ( char ) ( rem - 10 + 'a' );

	else
		cout << rem;
}

int main()
{
	int t;
	string src, input;
	cin >> t;

	for ( int cs = 1; cs <= t; cs++ )
	{
		cout << "Case " << cs << ":" << endl;
		cin >> input >> src;

		if ( src == "bin" )
		{
			sz = 0;
			long long int a = stoll ( input, &sz, 2 );

			cout << a << " dec" << endl;

			to_hex ( a );
			cout << " hex" << endl;
		}

		else if ( src == "dec" )
		{
			sz = 0;
			long long int a = stoll ( input, &sz, 10 );

			to_hex ( a );
			cout << " hex" << endl;

			to_binary ( a );
			cout << " bin" << endl;
		}

		else if ( src == "hex" )
		{
			sz = 0;
			long long int a = stoll ( input, &sz, 16 );

			cout << a << " dec" << endl;

			to_binary ( a );
			cout << " bin" << endl;
		}

		cout << endl;
	}
	
	return 0;
}
