
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string dollars;
	int cents;

	while ( cin >> dollars >> cents )
	{
		cout << "$";

		int len = dollars.length();

		for ( int i = 0; i < len; i++ )
		{
			if ( ( len - i ) % 3 == 0 && i )
				cout << ",";

			cout << dollars[i];
		}

		cout << ".";

		if ( cents < 10 ) cout << "0";

		cout << cents << endl;
	}

	return 0;
}
