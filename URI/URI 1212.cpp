
#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int a, b;
	int cnt, carry;

	while ( cin >> a >> b && ( a || b ) )
	{
		cnt = carry = 0;

		while ( a > 0 || b > 0 )
		{
			carry = ( carry + ( a % 10 ) + ( b % 10 ) ) / 10;

			if ( carry ) cnt++;

			a /= 10;
			b /= 10;
		}

		if ( cnt == 0 ) cout << "No carry operation." << endl;

		else if ( cnt == 1 ) cout << "1 carry operation." << endl;

		else cout << cnt << " carry operations." << endl;
	}

	return 0;
}
