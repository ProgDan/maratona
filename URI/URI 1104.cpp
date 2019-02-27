
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int A, B;

	while ( cin >> A >> B and ( A + B ) )
	{
		set<int> set_A, set_B;
		int card;

		while ( A-- )
		{
			cin >> card;
			set_A.insert ( card );
		}

		while ( B-- )
		{
			cin >> card;
			set_B.insert ( card );
		}

		for ( auto x : set_A )
		{
			if ( set_B.count ( x ) == 0 )
			{
				A++;
			}
		}

		for ( auto x : set_B )
		{
			if ( set_A.count ( x ) == 0 )
			{
				B++;
			}
		}

		cout << min ( A + 1, B + 1 ) << endl;
	}

	return 0;
}
