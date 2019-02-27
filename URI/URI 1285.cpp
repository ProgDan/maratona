
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int lo, hi, cnt = 0;


	while ( cin >> lo >> hi )
	{
		cnt = 0;

		for ( int i = lo; i <= hi; i++ )
		{
loop:

			if ( i > hi ) break;

			string s = to_string ( i );
			// might not work in every compiler.
			// needs c++14

			for ( int j = 0; j < s.length() - 1; j++ )
			{
				for ( int k = j + 1; k < s.length(); k++ )
				{
					if ( s[j] == s[k] )
					{
						i++;
						goto loop;
					}
				}
			}

			cnt++;
		}

		cout << cnt << endl;
	}

	return 0;
}
