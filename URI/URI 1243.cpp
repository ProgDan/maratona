
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen ( "in.txt", "r", stdin );
	int tc;
	cin >> tc;

	char str[60];
	int mov;

	while ( tc-- )
	{
		cin >> str;
		cin >> mov;

		for ( int i = 0; i < strlen ( str ); i++ )
		{
			printf ( "%c", 'A' + (  str[i] + 'A' - mov ) % 26 );
		}

		cout << endl;
	}

	return 0;
}
